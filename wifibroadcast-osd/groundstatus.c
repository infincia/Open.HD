#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "groundstatus.h"
#include "osdconfig.h"

void groundstatus_init(groundstatus_data_t *gcsd) {
	gcsd->vin = 0;
	gcsd->vout = 0;
	gcsd->iout = 0;
    gcsd->vbat = 0;
}
