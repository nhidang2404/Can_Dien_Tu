#ifndef SCALE_MATH_H
#define SCALE_MATH_H

#include <stdint.h>
#include <stdbool.h>

#define SCALE_CAL_WEIGHT_G   500
#define SCALE_TARE_MAX_G     400

void scale_add_sample(int32_t raw);
int32_t scale_get_gross_g(void);
int32_t scale_get_net_g(void);
bool scale_is_stable(void);
bool scale_is_overload(void);
bool scale_tare(void);

bool scale_calib_set_zero(void);
bool scale_calib_set_span(int32_t known_weight_g);
void scale_get_calib(int32_t *zero_raw, int32_t *span_counts);
void scale_set_calib(int32_t zero_raw, int32_t span_counts);

#endif
