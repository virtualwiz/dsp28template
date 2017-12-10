

#ifndef EXAMPLE_H
#define EXAMPLE_H

/*---- shared global function prototypes -----------------------------------*/
//extern void InitAdc(void);
//extern void InitDevEmu(void);
//extern void //(void);
//extern void InitECana(void);
//extern void InitEv(void);
extern void InitGpio(void);
//extern void InitMcbsp(void);
extern void InitPieCtrl(void);
extern void InitPieVectTable(void);
//extern void InitSci(void);
//extern void InitSpi(void);
extern void InitSysCtrl(void);
extern void InitXintf(void);
extern void InitXIntrupt(void);

extern void KickDog(void);

#endif   // - end of EXAMPLE_H

