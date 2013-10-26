#include <stm32f10x.h>
#include "led.h"

void led_gpio_config(void)
{
    GPIO_InitTypeDef GPIOx;
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOF, ENABLE);
    GPIOx.GPIO_Pin = LED_PIN;
    GPIOx.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIOx.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(LED_PORT, &GPIOx);
    GPIO_SetBits(LED_PORT, LED_PIN);
}

/* EOF */
