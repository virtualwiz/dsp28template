//����������ʵ��

#include "DSP28_Device.h"

void Delay(Uint16  data);

void main(void)
{
	InitSysCtrl();					//��ʼ��ϵͳ

	DINT;							//���ж�
	IER = 0x0000;
	IFR = 0x0000;

	InitPieCtrl();					//��ʼ��PIE
	InitPieVectTable();				//��ʼ��PIE�ж�ʸ����
	InitPeripherals();				//��ʼ������
 	InitGpio();						//��ʼ��GPIO
 	
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

void Delay(Uint16  data)			//��ʱ����
{
	Uint16	i;
	for (i=0;i<data;i++) { ; }	
}	
