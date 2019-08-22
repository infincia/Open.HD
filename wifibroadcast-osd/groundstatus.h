#pragma once

#include <stdint.h>
#include <time.h>
#include "osdconfig.h"

/**
 * 
 * This is a standardized groundstation status type meant to be filled in by
 * hardware-specific code, then passed to the render() function for drawing.
 * 
 **/
typedef struct {
	float vin;  // Unit: V,   example: 11.54
	float vout; // Unit: V,   example: 5.02
    float iout; // Unit: A,   example: 1.3
    float vbat; // Unit: V,   example: 3.45
} groundstatus_data_t;

void groundstatus_init(groundstatus_data_t *gcsd);
