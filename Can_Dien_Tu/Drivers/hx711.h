#ifndef HX711_H
#define HX711_H

#include <stdint.h>
#include "stm32f1xx.h"

void hx711_init(void);
int hx711_read(int32_t *raw); // Trả về 0 nếu OK, khác 0 nếu timeout > 250ms

#endif
