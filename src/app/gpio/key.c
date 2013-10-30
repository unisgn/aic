#include <key.h>

void key_gpio_init(void)
{
    GPIO_InitStructure KEY_GPIO;
    RCC_APB2PeriphClockCmd(KEY1_RCC | KEY2_RCC, ENABLE);
    KEY_GPIO.GPIO_Mode = GPIO_Mode_IPU;

    KEY_GPIO.GPIO_Pin = KEY1_PIN | KEY3_PIN;
    GPIO_Init(KEY1_PORT, &KEY_GPIO);
    
    KEY_GPIO.GPIO_Pin = KEY2_PIN | KEY4_PIN;
    GPIO_Init(KEY2_PORT, &KEY_GPIO);
}


key_num_t key_scan(void)
{
    if(!GPIO_ReadInputDataBit(KEY1_PORT, KEY1_PIN))
        return KEY_DS1;
    else if(!GPIO_ReadInputDataBit(KEY2_PORT, KEY2_PIN))
        return KEY_DS2;
    else if(!GPIO_ReadInputDataBit(KEY3_PORT, KEY3_PIN))
        return KEY_DS3;
    else if(!GPIO_ReadInputDataBit(KEY4_PORT, KEY3_PIN))
        return KEY_DS4;
    else
        return NOKEY;
}


    
