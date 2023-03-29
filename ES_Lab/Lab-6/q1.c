#include <LPC17xx.h>
int main(void){
	unsigned int j;
	unsigned long LED;
	SystemInit(); //Add these two function for its internal operation
  SystemCoreClockUpdate();
	LPC_PINCON->PINSEL0 &= 0xFF0000FF;
	LPC_GPIO0->FIODIR |=0X00000FF0;
	while(1){
		for(LED=0;LED<256;LED++){
			LPC_GPIO0->FIOPIN=LED<<4;
			for(j=0;j<100000;j++);
		}
}

}
