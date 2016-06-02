#include STM32_HAL_H
#include "py/mphal.h"
#include "pin.h"
#include "genhdr/pins.h"

#ifndef _GDISP_LLD_TOGGLE_BOARD_H
#define _GDISP_LLD_TOGGLE_BOARD_H

// The below are example values

#define GINPUT_TOGGLE_NUM_PORTS			8			// The total number of toggle inputs
#define GINPUT_TOGGLE_CONFIG_ENTRIES	8			// The total number of GToggleConfig entries

#define GINPUT_TOGGLE_RIGHT   0				// Joystick Right
#define GINPUT_TOGGLE_UP      1				// Joystick Up
#define GINPUT_TOGGLE_A       2				// Switch 1
#define GINPUT_TOGGLE_B       3				// Switch 2
#define GINPUT_TOGGLE_MENU    4
#define GINPUT_TOGGLE_DOWN    5				// Joystick Down
#define GINPUT_TOGGLE_LEFT    6				// Joystick Left
#define GINPUT_TOGGLE_CENTER  7				// Joystick Center

/*
PD3 - RIGHT - AH
PD6 - UP - AH
PD8 - A - AL
PD9 - B - AL
PD10 - MENU - AL
PD11 - DOWN - AH 
PE0 - CENTRE - AH
PA15 - LEFT - AH
*/

#define GINPUT_TOGGLE_DECLARE_STRUCTURE()											\
const GToggleConfig GInputToggleConfigTable[GINPUT_TOGGLE_CONFIG_ENTRIES] = {   \
    {GPIOD, GPIO_PIN_3,  0, 0}, /* PD3  - Joy Right */   \
    {GPIOD, GPIO_PIN_6,  0, 0}, /* PD6  - Joy Up */      \
    {GPIOD, GPIO_PIN_8,  GPIO_PIN_8, 0}, /* PD8  - A Button */    \
    {GPIOD, GPIO_PIN_9,  0, 0}, /* PD9  - B Button */    \
    {GPIOD, GPIO_PIN_10, 0, 0}, /* PD10 - Menu Button */ \
    {GPIOD, GPIO_PIN_11, GPIO_PIN_11, 0}, /* PD11 - Joy Down */    \
    {GPIOE, GPIO_PIN_0,  GPIO_PIN_0, 0}, /* PE0  - Joy Centre */  \
    {GPIOA, GPIO_PIN_15, GPIO_PIN_15, 0}, /* PA15 - Joy Left */    \
}

#endif /* _GDISP_LLD_TOGGLE_BOARD_H */