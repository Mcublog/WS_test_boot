#include "main.h"
//#include "cmsis_os.h"

#include "init_main.h"
#include "error_list.h"

#ifdef BOOT
    #include "firmware.h"
#endif
//-------------------------Types and definition-------------------------------
#define INNER_FLASH_ADDR            0x08000000
#define MAIN_PROGRAM_START_ADDRESS  0x08030000
#define MAIN_PROGRAM_END_ADDRESS    0x08080000

#define FIRMWARE_OFFST (MAIN_PROGRAM_START_ADDRESS - INNER_FLASH_ADDR)
    
//----------------------------------------------------------------------------


//-------------------------Local variables and fucntion-----------------------
UART_HandleTypeDef huart2;

void ExecMainFW(void);
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
#ifdef FIRMWARE    
    SCB->VTOR = FLASH_BASE | FIRMWARE_OFFST;
#endif    
    //-------------------------HW init----------------------------------------
    HAL_Init();  
    SystemClock_Config();
    MX_GPIO_Init();
    //------------------------------------------------------------------------
#ifdef BOOT    
    HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_SET);
    HAL_Delay(1000);
    ExecMainFW();
#endif
#ifdef FIRMWARE
    //__enable_irq();
    while (1)
    {
        HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);
        HAL_Delay(100);
    }
#endif    
}
//------------------------------------------------------------------------

void ExecMainFW(void)
{
    typedef  void (*pFunction)(void);
    uint32_t jumpAddress = *((__IO uint32_t*) (MAIN_PROGRAM_START_ADDRESS + 4)); 
    
    pFunction Jump_To_Application = (pFunction) jumpAddress;
 
    HAL_RCC_DeInit();  
    HAL_DeInit();

    SCB->VTOR = MAIN_PROGRAM_START_ADDRESS;

    __set_MSP(*(__IO uint32_t*) MAIN_PROGRAM_START_ADDRESS); 
    Jump_To_Application(); 
}
