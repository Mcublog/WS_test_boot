#include "main.h"

#include "init_main.h"
#include "error_list.h"

#ifdef BOOT
    #include "firmware.h"
#endif
//-------------------------Types and definition-------------------------------
#define INNER_FLASH_ADDR            0x08000000
#define MAIN_PROGRAM_START_ADDRESS  0x08030000


#define BOOT_MARK       (0xFFFFFFFF)
#define RST_BOOT_MARK   (0x00000000)

#define FIRMWARE_OFFST (MAIN_PROGRAM_START_ADDRESS - INNER_FLASH_ADDR)
//----------------------------------------------------------------------------


//-------------------------Local variables and fucntion-----------------------
UART_HandleTypeDef huart2;

static void _set_boot_mark(void);
static void _check_boot_mark(void);
static void _set_mark(uint32_t mark);
//----------------------------------------------------------------------------

//-------------------------Project options--------------------------------
//------------------------------------------------------------------------

//-------------------------Task list--------------------------------------
//------------------------------------------------------------------------

//-------------------------Semaphore list---------------------------------
//------------------------------------------------------------------------

//-------------------------Queue list-------------------------------------
//------------------------------------------------------------------------

//-------------------------Programm entry point---------------------------
int main(void)
{
    _check_boot_mark();
// #ifdef FIRMWARE
//     SCB->VTOR = FLASH_BASE | FIRMWARE_OFFST;
// #endif
    //-------------------------HW init----------------------------------------
    HAL_Init();

    SystemClock_Config();
    MX_GPIO_Init();
    //------------------------------------------------------------------------
#ifdef BOOT
    HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_SET);
    HAL_Delay(1000);
    _set_boot_mark();
#endif
#ifdef FIRMWARE
    while (1)
    {
        HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);
        HAL_Delay(100);
    }
#endif
}
//------------------------------------------------------------------------

/*-----------------------------------------------------------
/brief: Set mark to boot new app and RESET
/param:
/return:
-----------------------------------------------------------*/
void _set_boot_mark(void)
{
    uint32_t *prst = (uint32_t*)(BKP_BASE + MMNGR_BACKUPRAM_OFFSET);

    _set_mark(BOOT_MARK);
    //RST
    HAL_NVIC_SystemReset();
}

/*-----------------------------------------------------------
/brief: Check boot mark, reset it, and boot new app
/param:
/return:
-----------------------------------------------------------*/
static void _check_boot_mark(void)
{
    if (_get_mark() == BOOT_MARK)
    {
        _set_mark(RST_BOOT_MARK);// clear boot mark, after RST bootloader to start

        HAL_RCC_DeInit();// Clock deinit
        HAL_DeInit();

        __set_MSP(*(volatile uint32_t*) MAIN_PROGRAM_START_ADDRESS);

        typedef  void (*pFunction)(void);
        // 4 offset added to go to the beginning of the IRQ table
        uint32_t jumpAddress = *((volatile uint32_t*) (MAIN_PROGRAM_START_ADDRESS + 4));
        pFunction Jump_To_Application = (pFunction) jumpAddress;
        Jump_To_Application();
    }
    else
    {
        SCB->VTOR = FLASH_BASE | FIRMWARE_OFFST;
    }
}

/*-----------------------------------------------------------
/brief: Set mark in the backup RAM
/param: Vulue of mark
/return:
-----------------------------------------------------------*/
static void _set_mark(uint32_t mark)
{
    volatile uint32_t *pmark = (uint32_t*)(BKP_BASE + MMNGR_BACKUPRAM_OFFSET);

    HAL_PWR_EnableBkUpAccess();
    *pmark = mark;
    HAL_PWR_DisableBkUpAccess();
}

/*-----------------------------------------------------------
/brief: Get mark value from the backup RAM
/param:
/return: Value of mark
-----------------------------------------------------------*/
static uint32_t _get_mark(void)
{
    return *((uint32_t*)(BKP_BASE + MMNGR_BACKUPRAM_OFFSET));
}
