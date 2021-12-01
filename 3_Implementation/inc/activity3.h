/**
 * @file activity3.h
 * @author Prassanna
 * @brief Generating PWM pulse from temperature sensor values
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__

/**
 * Include files
 */ 
#include "project_config.h"
#include <avr/io.h>
#include <util/delay.h>

/**
 * Macro Definitions
 */
#define PWM_DDR (&DDRB) /**< PWM DDR as DDRB */
#define PWM_PORT (&PORTB) /**< PWM PORT as PORTB */
#define PWM_PIN PB1 /**< PWM PIN as PB1 */
#define COMPARE_REG (&OCR1A) /**< COMPARE Register address */

/**
 * @brief Initialize all the Peripherals and pin configurations 
 * 
 */
void activity3_init();

/**
 * @brief Set the pwm threshold register
 * 
 * @param temp 
 */

void set_pwm_threshold(uint16_t temp);
/**
 * @brief Get the temp in degree C
 * 
 * @param temp 
 * @return Returns temperature in degree C 
 */
uint16_t get_temp_in_c(uint16_t temp);

#endif /** __ACTIVITY3_H__ */
