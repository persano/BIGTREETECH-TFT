#ifndef _PIN_MKS_GD_TFT28_V4_0_H_
#define _PIN_MKS_GD_TFT28_V4_0_H_

// MCU type (STM32F10x, STM32F2xx, STM32F4xx, GD32F20x, GD32F30x)
#ifndef MCU_TYPE
  #define MCU_TYPE
  #include "gd32f30x.h"
#endif

// Update folder for fonts and icons
#ifndef UPDATE_DIR
  #define UPDATE_DIR "TFT28"
#endif

// Hardware version config
#ifndef HARDWARE_VERSION
  #define HARDWARE_VERSION "GD_TFT28_V4.0"
#endif

// Pin layout is identical to V1.2-4; inherit all port/peripheral assignments
#include "pin_MKS_GD_TFT28_V1_2_4.h"

#endif
