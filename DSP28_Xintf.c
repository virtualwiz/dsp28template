//
//      TMDX ALPHA RELEASE
//      Intended for product evaluation purposes
//
//###########################################################################
//
// FILE:	DSP28_Xintf.c
//
// TITLE:	DSP28 Device External Interface Init & Support Functions.
//
//###########################################################################
//
//  Ver | dd mmm yyyy | Who  | Description of changes
// =====|=============|======|===============================================
//  0.55| 06 May 2002 | L.H. | EzDSP Alpha Release
//  0.56| 20 May 2002 | L.H. | No change
//  0.57| 27 May 2002 | L.H. | No change
//###########################################################################

#include "DSP28_Device.h"

//---------------------------------------------------------------------------
// InitXINTF: 
//---------------------------------------------------------------------------
// This function initializes the External Interface to a known state.
//
void InitXintf(void)
{

	#if  F2812
    // Example of chaning the timing of XINTF Zones.  
    // Note acutal values should be based on the hardware 
    // attached to the zone - timings presented here are 
    // for example purposes.
     
    // All Zones:
    // Timing for all zones based on XTIMCLK = SYSCLKOUT/2 
    XintfRegs.XINTCNF2.bit.XTIMCLK = 1;  // XTIMCLK = SYSCLKOUT/2
    XintfRegs.XINTCNF2.bit.CLKOFF = 1;   // DISABLE XCLKOUT
	XintfRegs.XINTCNF2.bit.WRBUFF = 0;   // NO WRITE BUFFER
	XintfRegs.XINTCNF2.bit.CLKMODE = 1;  // XCLKOUT = XTIMCLK/4
	// Zone 1
	// Ignore XREADY for Zone 1 accesses
	// Change read access lead/active/trail timing
	XintfRegs.XTIMING1.bit.USEREADY = 0;
	XintfRegs.XTIMING1.bit.XSIZE = 3;		// ALWAYS WRITE TO 11BIT
	XintfRegs.XTIMING1.bit.XWRACTIVE = 3;
	XintfRegs.XTIMING1.bit.XWRTRAIL=7;
	XintfRegs.XTIMING1.bit.XWRLEAD=3;
	XintfRegs.XTIMING1.bit.XRDLEAD = 3;
	XintfRegs.XTIMING1.bit.XRDACTIVE =7;
	XintfRegs.XTIMING1.bit.XRDTRAIL = 3;
	// Double lead/active/trial timing for Zone 1
	XintfRegs.XTIMING1.bit.X2TIMING=1;

	
    XintfRegs.XBANK.bit.BCYC = 7; 	
    XintfRegs.XBANK.bit.BANK = 1;
	

	// Zone 2
	// Ignore XREADY for Zone 2 accesses
	// Change read access lead/active/trail timing
	XintfRegs.XTIMING2.bit.USEREADY = 1;
	XintfRegs.XTIMING2.bit.XSIZE = 3;
	XintfRegs.XTIMING2.bit.XWRACTIVE = 1;
	XintfRegs.XTIMING2.bit.XWRTRAIL=3;
	XintfRegs.XTIMING2.bit.XWRLEAD=1;
	XintfRegs.XTIMING2.bit.XRDLEAD = 1;
	XintfRegs.XTIMING2.bit.XRDACTIVE =3;
	XintfRegs.XTIMING2.bit.XRDTRAIL = 1;
	//no Double lead/active/trial timing for Zone 2
	XintfRegs.XTIMING2.bit.X2TIMING=0;

	
	// Zone 6
	// Ignore XREADY for Zone 2 accesses
	// Change read access lead/active/trail timing
	XintfRegs.XTIMING6.bit.USEREADY = 0;
	XintfRegs.XTIMING6.bit.XSIZE = 3;
	XintfRegs.XTIMING6.bit.XWRACTIVE = 1;
	XintfRegs.XTIMING6.bit.XWRTRAIL=1;
	XintfRegs.XTIMING6.bit.XWRLEAD=1;
	XintfRegs.XTIMING6.bit.XRDLEAD = 1;
	XintfRegs.XTIMING6.bit.XRDACTIVE =1;
	XintfRegs.XTIMING6.bit.XRDTRAIL = 1;
	// Double lead/active/trial timing for Zone 2
	XintfRegs.XTIMING6.bit.X2TIMING=0;
	
	#endif
}	
	
//===========================================================================
// No more.
//===========================================================================
