#ifndef BSP_TIMER_H
#define BSP_TIMER_H

#include <stdint.h>
#include "stm32f1xx.h"

void tim2_init_1mhz(void);
uint32_t millis(void);
void delay_us(uint32_t us);

#endif
