#include <led.h>
#include <key.h>

void key_drive_led(void)
{
    led_gpio_init();
    key_gpio_init();
    while(1) {
        switch(key_scan()) {
        case KEY_DS1:
            LED_ALL_OFF();
            LED_DS1_ON();
            break;
        case KEY_DS2:
            LED_ALL_OFF();
            LED_DS2_ON();
            break;
        case KEY_DS3:
            LED_ALL_OFF();
            LED_DS3_ON();
            break;
        case KEY_DS4:
            LED_ALL_OFF();
            LED_DS4_ON();
            break;
        default:
            LED_ALL_OFF();
            break;
        }
    }
}

