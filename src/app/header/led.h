#ifndef __LED_H__
#define __LED_H__

#include <stm32f10x.h>

#define LED_PORT GPIOF
#define LED_PIN GPIO_Pin_7

#define LED_OFF() do { GPIO_SetBits(LED_PORT, LED_PIN); } while(0)
#define LED_ON() do { GPIO_ResetBits(LED_PORT, LED_PIN); } while(0)

void led_gpio_config(void);
#endif
/* EOF */
