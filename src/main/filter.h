#pragma once

#include <stdint.h>

#define IMU_SAMPLE_RATE 200.0f
#define IMU_FILTER_CUTOFF_FREQ 30.0f
#define M_PI_F 3.1415926

typedef struct {
  float lpf_last;
  float alpha;
} filter_pt1;

typedef struct {
  float x_est_last;
  float P_last;
  float Q;
  float R;
} filter_kalman;

typedef struct {
  float v[2];
} filter_be_hp1;

typedef struct {
  float v[2];
} filter_sp;

typedef struct {
  float cutoff_freq;
  float a1;
  float a2;
  float b0;
  float b1;
  float b2;
  float delay_element_1; /* Buffered sample -1 */
  float delay_element_2; /* Buffered sample -2 */
} filter_iir_lpf2;

float lpfcalc(float sampleperiod, float filtertime);
float lpfcalc_hz(float sampleperiod, float filterhz);

void lpf(float *out, float in, float coeff);

void filter_init();

void filter_pt1_init(filter_pt1 *filter, uint8_t count, float hz);
void filter_pt1_coeff(filter_pt1 *filter, uint8_t count, float hz);
float filter_pt1_step(filter_pt1 *filter, float in);

void filter_kalman_init(filter_kalman *filter, uint8_t count, float coeff);
float filter_kalman_step(filter_kalman *filter, float in);

void filter_be_hp1_init(filter_be_hp1 *filter);
float filter_be_hp1_step(filter_be_hp1 *filter, float x);

void filter_sp_init(filter_sp *filter, uint8_t count);
float filter_sp_step(filter_sp *filter, float x);

void filter_iir_lpf2_init(filter_iir_lpf2 *filter, float sample_freq, float cutoff_freq);
float filter_iir_lpf2_step(filter_iir_lpf2 *filter, float sample);

float throttlehpf(float in);