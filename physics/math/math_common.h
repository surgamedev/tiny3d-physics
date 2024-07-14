#ifndef PHYSICS_MATH_COMMON_H
#define PHYSICS_MATH_COMMON_H

#include <assert.h>
#include <math.h>
#include <stdbool.h>
#include <float.h>

#include "../physics_config.h"

// ---------- Mathematics functions ---------- //

float qi_sqrt(float number);

float rad(float angle);
float deg(float rad);

int clamp_int(int value, int lowerLimit, int upperLimit);
float clamp_float(float value, float lowerLimit, float upperLimit);

float max2(float a, float b);
float min2(float a, float b);

float min3(float a, float b, float c);
float max3(float a, float b, float c);

bool sameSign(float a, float b);
bool approxEqual(float a, float b);

bool isfinite(float x);


#endif
