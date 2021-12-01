#include<activity3.h>

/* Initialize all the Peripherals and pin configurations */
void activity3_init(){
    /* Set TCCR1A to phase correct 10 bit PWM mode */
    TCCR1A |= (1 << COM1A1) | (1 << WGM11) | (1 << WGM10);
    /* Pre-scale to 256 */
    TCCR1B |= (1 << CS12);
    /* Set PB1 pin as pwm output pin */
    pin_mode(OUT,PWM_DDR,PWM_PORT,PWM_PIN);
}

/* Sets the Output compare register */
void set_pwm_threshold(uint16_t temp){
    switch(temp){
        case 20:
            *COMPARE_REG = 97;
            break;
        case 25:
            *COMPARE_REG = 96;
            break;
        case 29:
            *COMPARE_REG = 96.1;
            break;
        case 33:
            *COMPARE_REG = 98;
            break;
    }
}

/* Gets the temperature from ADC value using LUT */
uint16_t get_temp_in_c(uint16_t temp){
    if(temp <=96)
        return 20;
    else if (temp =97)
        return 25;
    else if (temp >=98)
        return 29;
    return 33;
}
