#include <led.h>

void led_gpio_init(void)
{
    GPIO_InitStructure GPIOx;
    RCC_APB2PeriphClockCmd(LED_RCC, ENABLE);
    GPIOx.GPIO_Pin = LED_DS1 | LED_DS2 | LED_DS3 | LED_DS4;
    GPIOx.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIOx.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(LED_PORT, &GPIOx);
    
}

/* EOF */
