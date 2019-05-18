#include "main.h"
#include "cmsis_os.h"

#include "init_main.h"
#include "error_list.h"

#ifdef BOOT
#include "firmware.h"
#endif
//-------------------------Types and definition-------------------------------
#define MAIN_PROGRAM_START_ADDRESS  0x08030000
#define MAIN_PROGRAM_END_ADDRESS    0x08080000
//----------------------------------------------------------------------------

//-------------------------Local variables and fucntion-----------------------
UART_HandleTypeDef huart2;

void ExecMainFW(void);
//----------------------------------------------------------------------------

//-------------------------Project options--------------------------------
typedef  void (*pFunction)(void);

#define LED_PORT    (GPIOD)
#define LED_BLUE    (LED2_Pin)
#define LED_GREEN   (LED3_Pin)
#define LED_RED     (LED4_Pin)
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
    //-------------------------HW init----------------------------------------
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    //------------------------------------------------------------------------
#ifdef BOOT    
    HAL_GPIO_WritePin(LED_PORT, LED2_Pin, GPIO_PIN_SET);
    HAL_Delay(1000);
    ExecMainFW();
#endif    
    while (1)
    {
        #ifdef FIRMWARE
        HAL_GPIO_WritePin(LED_PORT, LED3_Pin, GPIO_PIN_SET);
        HAL_Delay(50);
        HAL_GPIO_WritePin(LED_PORT, LED3_Pin, GPIO_PIN_RESET);
        HAL_Delay(50);
        #endif
    }
}
//------------------------------------------------------------------------

void ExecMainFW(void)
{
    uint32_t jumpAddress = *((__IO uint32_t*) (MAIN_PROGRAM_START_ADDRESS + 4)); 
    
    pFunction Jump_To_Application = (pFunction) jumpAddress;
 
    HAL_RCC_DeInit();  
 

    __disable_irq();
    SCB->VTOR = MAIN_PROGRAM_START_ADDRESS;
    __enable_irq();    
    __set_MSP(*(__IO uint32_t*) MAIN_PROGRAM_START_ADDRESS); 
    Jump_To_Application(); 
}
