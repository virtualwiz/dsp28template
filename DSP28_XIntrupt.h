
#ifndef DSP28_XINTRUPT_H
#define DSP28_XINTRUPT_H

//---------------------------------------------------------------------------

struct XINTCR_BITS {
    Uint16   ENABLE:1;    // 0      enable/disable
    Uint16   rsvd1:1;     // 1      reserved
    Uint16   POLARITY:1;  // 2      pos/neg triggered
    Uint16   rsvd2:12;    // 15:3   reserved
};

union XINTCR_REG {
   Uint16               all;
   struct XINTCR_BITS   bit;
};  

struct XNMICR_BITS {
    Uint16   ENABLE:1;    // 0      enable/disable
    Uint16   SELECT:1;    // 1      Timer 1 or XNMI connected to INT13
    Uint16   POLARITY:1;  // 2      pos/neg triggered
    Uint16   rsvd2:12;    // 15:3   reserved
};

union XNMICR_REG {
   Uint16               all;
   struct XNMICR_BITS   bit;
};  




//---------------------------------------------------------------------------
// External Interrupt Register File:
//
struct XINTRUPT_REGS {
   union XINTCR_REG XINT1CR;
   union XINTCR_REG XINT2CR;
   Uint16 rsvd1[5];
   union XNMICR_REG XNMICR;
   Uint16 XINT1CTR;
   Uint16 XINT2CTR;
   Uint16 rsvd[5];
   Uint16 XNMICTR;
};

//---------------------------------------------------------------------------
// External Interrupt References & Function Declarations:
//
extern volatile struct XINTRUPT_REGS XIntruptRegs;

#endif  // end of DSP28_XINTF_H definition

//===========================================================================
// No more.
//===========================================================================
