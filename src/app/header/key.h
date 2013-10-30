#ifndef __GPIO_KEY_H__
#define __GPIO_KEY_H__

#define KEY1_RCC RCC_APB2Periph_GPIOC
#define KEY1_PORT GPIOC
#define KEY1_PIN GPIO_Pin_3

#define KEY2_RCC RCC_APB2Periph_GPIOA
#define KEY2_PORT GPIOA
#define KEY2_PIN GPIO_Pin_1

#define KEY3_RCC KEY1_RCC
#define KEY3_PORT KEY1_PORT
#define KEY3_PIN GPIO_Pin_13

#define KEY4_RCC KEY2_RCC
#define KEY4_PORT KEY2_PORT
#define KEY4_PIN GPIO_Pin_0

typedef enum {
    NOKEY,
    KEY_DS1,
    KEY_DS2,
    KEY_DS3,
    KEY_DS4
} key_num_t;

void key_gpio_init(void);
key_num_t key_scan(void);

#endif
