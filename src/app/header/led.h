#ifndef __GPIO_LED_H__
#define __GPIO_LED_H__
#include <stm32f10x.h>

#define LED_PORT GPIOF
#define LED_RCC RCC_APB2Periph_GPIOF
#define LED_DS1 GPIO_Pin_10
#define LED_DS2 GPIO_Pin_9
#define LED_DS3 GPIO_Pin_8
#define LED_DS4 GPIO_Pin_7

#define LED_DS1_ON() do { GPIO_ResetBits(LED_PORT, LED_DS1) ; } while(0)
#define LED_DS1_OFF() do { GPIO_SetBits(LED_PORT, LED_DS1) ; } while(0)
#define LED_DS2_ON() do { GPIO_ResetBits(LED_PORT, LED_DS2) ; } while(0)
#define LED_DS2_OFF() do { GPIO_SetBits(LED_PORT, LED_DS2) ; } while(0)
#define LED_DS3_ON() do { GPIO_ResetBits(LED_PORT, LED_DS3) ; } while(0)
#define LED_DS3_OFF() do { GPIO_SetBits(LED_PORT, LED_DS3) ; } while(0)
#define LED_DS4_ON() do { GPIO_ResetBits(LED_PORT, LED_DS4) ; } while(0)
#define LED_DS4_OFF() do { GPIO_SetBits(LED_PORT, LED_DS4) ; } while(0)

#define LED_ALL_ON() do { \
        LED_DS1_ON();     \
        LED_DS2_ON();     \
        LED_DS3_ON();     \
        LED_DS4_ON();     \
    } while(0)

#define LED_ALL_OFF() do { \
        LED_DS1_OFF();     \
        LED_DS2_OFF();     \
        LED_DS3_OFF();     \
        LED_DS4_OFF();     \
    } while(0)

#define

void led_gpio_init(void);

#endif
