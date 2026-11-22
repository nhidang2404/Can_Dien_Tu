#ifndef LCD_I2C_H
#define LCD_I2C_H

#include <stdint.h>

void lcd_init(void);
void lcd_clear(void);
void lcd_print_line(uint8_t row, const char *str);

#endif
