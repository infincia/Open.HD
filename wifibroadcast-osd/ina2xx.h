#pragma once
#include "osdconfig.h"

#if INA2XX == true

#include "groundstatus.h"

void ina2xx_init();
void ina2xx_data(groundstatus_data_t *gcsd);
#endif
