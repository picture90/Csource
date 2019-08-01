#include<wiringPi.h>
#include <softPwm.h>

#include <stdio.h>

#define LED 1

int main(void){
	if(wiringPiSetup() == -1) return -1;
	
	softPwmCreate(LED, 0, 1023);
	
	for(;;) {
	softPwmWrite(LED, 100);
	}
}
