#ifndef I2C_BARE_H
#define I2C_BARE_H

#include <stdint.h>
#include <stdbool.h>
#include "stm32f1xx.h"

void i2c1_init(void);
bool i2c_write(uint8_t addr, const uint8_t *data, uint16_t len);

#endif
