#ifndef FLASH_STORE_H
#define FLASH_STORE_H

#include <stdint.h>
#include <stdbool.h>
#include "stm32f1xx.h"

#define FLASH_CALIB_PAGE_ADDR   0x0800FC00U
#define FLASH_CALIB_MAGIC_KEY   0xA5A55A5AU

bool flash_save_calib(int32_t zero_raw, int32_t span_counts);
bool flash_load_calib(int32_t *zero_raw, int32_t *span_counts);

#endif
