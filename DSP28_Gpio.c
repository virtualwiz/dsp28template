
#include "DSP28_Device.h"

void InitGpio(void)
{
// Set GPIO F port pins,bit0 as ouput,bit1 as input,bit2 as output, bit3 as ouput
// Input Qualifier =0, none
     EALLOW;
  	 GpioMuxRegs.GPFMUX.bit.SPISIMOA_GPIOF0 = 0;
  	 GpioMuxRegs.GPFMUX.bit.SPISOMIA_GPIOF1 = 0;
  	 GpioMuxRegs.GPFMUX.bit.SPICLKA_GPIOF2  = 0;
  	 GpioMuxRegs.GPFMUX.bit.SPISTEA_GPIOF3 = 0;
   	 GpioMuxRegs.GPDMUX.bit.T3CTRIP_PDPB_GPIOD5 = 0;//∑‰√˘∆˜øÿ÷∆π‹Ω≈£¨D5Ω≈ 	 
  	 GpioMuxRegs.GPFDIR.bit.GPIOF0 = 1;
  	 GpioMuxRegs.GPFDIR.bit.GPIOF1 = 0;
  	 GpioMuxRegs.GPFDIR.bit.GPIOF2 = 1;
  	 GpioMuxRegs.GPFDIR.bit.GPIOF3 = 1;
  	 GpioMuxRegs.GPDDIR.bit.GPIOD5 = 1; //D5Ω≈≈‰÷√Œ™ ‰≥ˆ
     EDIS;
}	
	
