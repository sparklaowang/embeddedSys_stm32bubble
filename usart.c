#include "usart.h"

int My_USART_Init(){
	USART_InitTypeDef Utd_init_struct;
	USART_ClockInitTypeDef Utd_clk_init_struct;
	
	USART_StructInit(&Utd_init_struct);
	USART_ClockStructInit(&Utd_clk_init_struct);
	USART_ClockInit(USART1, &Utd_clk_init_struct);
	USART_Init(USART1, &Utd_init_struct);
	USART_Cmd(USART1, ENABLE);
	return(0);
}

