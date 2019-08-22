#include "lifepo4weredpi.h"

#if LIFEPO4WEREDPI == true

#include <stdint.h>

#include "telemetry.h"
#include <stdio.h>

#include <lifepo4wered-data.h>


void lifepo4weredpi_data(groundstatus_data_t *gcsd) {
	// All data conversions necessary to match the format and units expected by 
	// groundstatus_data_t should be done here
	gcsd->vbat = (float)read_lifepo4wered(VBAT) / 1000.0;
	gcsd->vin = (float)read_lifepo4wered(VIN) / 1000.0;
	gcsd->iout = (float)read_lifepo4wered(IOUT) / 1000.0;
	gcsd->vout = (float)read_lifepo4wered(VOUT) / 1000.0;
}

#endif
