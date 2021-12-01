/**
 * @file  activity1.h
 * @author Prassanna
 * @brief Toggling LED based on inputs from button 
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY1_H__
#define __ACTIVITY1_H__


/**
 * Include files
 */ 
#include "project_config.h"
#include <avr/io.h>
#include <util/delay.h>

/**
 * Macro Definitions
 */
#define LED_PORT (&PORTB)    /**< LED Port */
#define LED_DDR (&DDRB)    /**< LED Data Direction Register */
#define LED_PIN  (PB0)  /**< LED Pin Number  */

#define BUTTON_PORT (&PORTD) /**< BUTTON and thermo Port */
#define BUTTON_DDR (&DDRD)  /**< BUTTON Data Direction Register */
#define BUTTON_STATUS (&PIND) /**< BUTTON Status Register */
#define BUTTON_PIN (PD2)  /**< BUTTON Pin number */
#define HEATER_PIN (PD3)  /**< thermo Pin number */

#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define LED_ON_TIME     (100)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (100)   /**< LED OFF time in milli seconds */

/**
 * Function declarations
 */

/**
 * @brief Function checks if button and thermo is on
 * 
 * @return returns true if both button and thermo is on 
 */
uint8_t button_thermo_check();


/**
 * @brief Initialize all the Peripherals and pin configurations 
 * 
 */
void activity1_init();

/**
 * @brief Changes led state based on button and thermo input
 * 
 */
void change_led_state();

#endif /** __ACTIVITY1_H__ */

