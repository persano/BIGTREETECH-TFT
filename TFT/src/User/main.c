#include "main.h"
#include "includes.h"

int main(void)
{
  SysTick->CTRL = 0;           // disable bootloader's SysTick — if TICKINT=1 it fires Default_Handler before Delay_init()
  SysTick->VAL  = 0;
  SCB->VTOR = VECT_TAB_FLASH;  // set before __enable_irq so interrupts use our vectors

  #ifdef GD32F3XX
    __enable_irq();
  #endif

  SystemClockInit();  // it depends on "variants.h" included in "includes.h"

  HW_Init();

  #if defined(SERIAL_DEBUG_PORT) && defined(SERIAL_DEBUG_ENABLED)
    dbg_print("Main Startup: Generic debug output is enabled.\n");
  #endif

  for (; ;)
  {
    (*infoMenu.menu[infoMenu.cur])();
  }
}
