/*
 * DD_PWM.c
 *
 * Created: 1/6/2014 10:40:34 AM
 *  Author: Geekay
 */ 

#include "DD_PWM.h"
#include "Platform/Drivers/DD_SYS/DD_SYS.h"

void DD_INIT_PWM()
{
	PWM->PWM_WPCR = 0x50574D00;
	PWM->PWM_CH_NUM[0].PWM_CMR = PWM_CMR_CPOL|PWM_CMR_CPRE_MCK_DIV_32|PWM_CMR_CES|PWM_CMR_DTE|PWM_CMR_DTHI|PWM_CMR_DTLI;
	PWM->PWM_CH_NUM[1].PWM_CMR = PWM_CMR_CPOL|PWM_CMR_CPRE_MCK_DIV_32|PWM_CMR_CES|PWM_CMR_DTE|PWM_CMR_DTHI|PWM_CMR_DTLI;
	PWM->PWM_CH_NUM[2].PWM_CMR= PWM_CMR_CPOL|PWM_CMR_CPRE_MCK_DIV_32|PWM_CMR_CES|PWM_CMR_DTE|PWM_CMR_DTHI|PWM_CMR_DTLI;
	//PWM->PWM_CH_NUM[4].PWM_CMR = PWM_CMR_CPOL|PWM_CMR_CPRE_MCK_DIV_32|PWM_CMR_CES|PWM_CMR_DTE|PWM_CMR_DTHI|PWM_CMR_DTLI;
	PWM->PWM_CH_NUM[5].PWM_CMR = PWM_CMR_CPOL|PWM_CMR_CPRE_MCK_DIV_16|PWM_CMR_CES|PWM_CMR_DTE|PWM_CMR_DTHI|PWM_CMR_DTLI;
//	PWM->PWM_CH_NUM[6].PWM_CMR = PWM_CMR_CPOL|PWM_CMR_CPRE_MCK_DIV_32|PWM_CMR_CES|PWM_CMR_DTE|PWM_CMR_DTHI|PWM_CMR_DTLI;


	//PIOC->PIO_ABSR = 0x00E00054;


	PWM->PWM_DIS = 0x000000FF;
	PWM->PWM_CLK = 0X00000A06;
	PWM->PWM_CH_NUM[4].PWM_CMR = 0x0000000B; // selecting CLOCKA
// 	PWM->PWM_CH_NUM[4].PWM_CPRD = 0x000001FA;
// 	PWM->PWM_CH_NUM[4].PWM_CDTY = 0x000000FD;
// 	PWM->PWM_CH_NUM[4].PWM_CPRD = 0x000000F8;
// 	PWM->PWM_CH_NUM[4].PWM_CDTY = 0x0000007C;
	PWM->PWM_CH_NUM[4].PWM_CPRD =1000;
	PWM->PWM_CH_NUM[4].PWM_CDTY = 500;


	
	//PWM->PWM_CH_NUM[5].PWM_CPRD = 0x000016b5;
	PWM->PWM_CH_NUM[5].PWM_CPRD = 28000;
	PWM->PWM_CH_NUM[5].PWM_CDTY = 0x00000b5a;
	
//	PWM->PWM_CH_NUM[6].PWM_CPRD = 0x00000600;
//	PWM->PWM_CH_NUM[6].PWM_CDTY = 0x00000200;

	PWM->PWM_CH_NUM[0].PWM_CPRD = 0x00000550;
	//PWM->PWM_CH_NUM[0].PWM_CDTY = 0x00000000;		//0x00000514;     commented on 12-05-2017 to start with zero duty dc motor2
	PWM->PWM_CH_NUM[0].PWM_CDTY = 800;
	
	
	
	PWM->PWM_CH_NUM[1].PWM_CPRD = 0x00001000;  // heater
	PWM->PWM_CH_NUM[1].PWM_CDTY = 0x00000800;
	

	PWM->PWM_CH_NUM[2].PWM_CPRD = 0x00000550;
	//PWM->PWM_CH_NUM[2].PWM_CDTY = 0x0000038E;
//	PWM->PWM_CH_NUM[2].PWM_CDTY = 0x00000000;		//0x000003B6;     commented on 12-05-2017 to start with zero duty   dc motor1
	PWM->PWM_CH_NUM[2].PWM_CDTY = 800;
//	PWM->PWM_ENA = 0x000000FF;
	PWM->PWM_ENA = 0x00000037;	                    


	
	
}


 uint32_t DD_SET_DUTY(const pwm_chnl CHANNEL_NUMBER,uint32_t DUTY)
 {
	// PWM->PWM_CH_NUM[CHANNEL_NUMBER].PWM_CDTYUPD = DUTY;
//	PWM->PWM_CH_NUM[CHANNEL_NUMBER].PWM_CPRD = 0x800;
	 PWM->PWM_CH_NUM[CHANNEL_NUMBER].PWM_CDTY = DUTY;
	 
	 return 0;
 }
 
 uint32_t DD_SET_PRDY(const pwm_chnl CHANNEL_NUMBER,uint32_t PERIOD_VALUE)
 {
	 PWM->PWM_CH_NUM[CHANNEL_NUMBER].PWM_CPRDUPD = PERIOD_VALUE;
	// PWM->PWM_CH_NUM[CHANNEL_NUMBER].PWM_CPRD = PERIOD_VALUE;
	 
	 return 0;
 }
 
 
 
 