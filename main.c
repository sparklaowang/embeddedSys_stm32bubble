#include "usart.h"
#include "stm32f10x.h"                  // Device header
#include "stdint.h"
uint16_t Utd_buf[64];
uint16_t index,i,j;
int main(){
	My_USART_Init();
	for(index = 0; index < 64 ; index ++){
		Utd_buf[index] = index + 32;
	}
	for(i = 0; i < 64 ; i++){
		for( j = 63; j > i ; j--){
			if(Utd_buf[j] > Utd_buf[j-1]){
				uint16_t temp;
				temp = Utd_buf[j];
				Utd_buf[j] = Utd_buf[j-1];
				Utd_buf[j-1] = temp;
			}
		}
	}
while (1)
{

}
}

