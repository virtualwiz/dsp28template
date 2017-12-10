
#include "DSP28_Device.h"

//---------------------------------------------------------------------------
// InitPeripherals:
//---------------------------------------------------------------------------
// The following function initializes the peripherals to a default state.
// It calls each of the peripherals default initialization functions.
// This function should be executed at boot time or on a soft reset.
//

void InitPeripherals(void)
{

   
    // Initialize External Interface To default State:
	InitXintf();

	InitGpio();
	
	// Initialize CPU Timers To default State:
	InitCpuTimers();

}
