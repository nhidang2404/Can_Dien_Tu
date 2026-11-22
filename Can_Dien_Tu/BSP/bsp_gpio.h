#ifndef BSP_GPIO_H
#define BSP_GPIO_H

#include <stdint.h>
#include <stdbool.h>
#include "stm32f1xx.h"

void gpio_init(void);
bool button_tare_event(void);
bool button_cal_event(void);
void alarm_set(bool on);
void led_pc13_task(void);

#endif
