//蜂鸣器控制实验

#include "DSP28_Device.h"

void Delay(Uint16  data);

void main(void)
{
	InitSysCtrl();					//初始化系统

	DINT;							//关中断
	IER = 0x0000;
	IFR = 0x0000;

	InitPieCtrl();					//初始化PIE
	InitPieVectTable();				//初始化PIE中断矢量表
	InitPeripherals();				//初始化外设
 	InitGpio();						//初始化GPIO
 	
	EALLOW;		
	EDIS;   
 
	EINT;   						// Enable INTM
	ERTM;							// Enable DBGM
    while(1)
    {
		GpioDataRegs.GPDDAT.bit.GPIOD5 = 1;
		Delay(60000);
		Delay(60000);
		Delay(60000);
		Delay(60000);
		Delay(60000);
		Delay(60000);				
		GpioDataRegs.GPDDAT.bit.GPIOD5 = 0;
    	Delay(60000);
		Delay(60000);
		Delay(60000);
		Delay(60000);
		Delay(60000);
		Delay(60000);		
		
	}
} 	

void Delay(Uint16  data)			//延时函数
{
	Uint16	i;
	for (i=0;i<data;i++) { ; }	
}	
