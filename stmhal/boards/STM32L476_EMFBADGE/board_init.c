#include STM32_HAL_H
#include "py/mphal.h"
#include "pin.h"
#include "genhdr/pins.h"


void STM32L476_EMFBADGE_board_early_init(void) {
  #ifdef MICROPY_HW_CC3100_HIB
    //Set HIB high
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStructure.Speed = GPIO_SPEED_FAST;
    GPIO_InitStructure.Pin = MICROPY_HW_CC3100_HIB.pin_mask;
    GPIO_InitStructure.Pull = GPIO_NOPULL;

    HAL_GPIO_Init(MICROPY_HW_CC3100_HIB.gpio, &GPIO_InitStructure);
    GPIO_set_pin(MICROPY_HW_CC3100_HIB.gpio, MICROPY_HW_CC3100_HIB.pin_mask);
  #endif
}
