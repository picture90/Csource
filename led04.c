#include<wiringPi.h>
#include<stdio.h>
#define LED_R 0
#define LED_Y 2
#define LED_G 3

int main(void){
		if(wiringPiSetup()== -1){
		printf("setup wiringPi falled!");
		return 1;
}
	pinMode(LED_R, OUTPUT);
	pinMode(LED_Y, OUTPUT);
	pinMode(LED_G, OUTPUT);

while(1){


digitalWrite(LED_R,HIGH);
digitalWrite(LED_Y,LOW);
digitalWrite(LED_G,LOW);
printf("LED_R ON...\n");
delay(700);

digitalWrite(LED_R,LOW);
digitalWrite(LED_Y,HIGH);
digitalWrite(LED_G,LOW);
printf("LED_Y ON...\n");
delay(700);

digitalWrite(LED_R,LOW);
digitalWrite(LED_Y,LOW);
digitalWrite(LED_G,HIGH);
printf("LED_G ON...\n");
delay(700);

digitalWrite(LED_R,LOW);
digitalWrite(LED_Y,HIGH);
digitalWrite(LED_G,LOW);
printf("LED_Y ON...\n");
delay(700);



digitalWrite(LED_R, LOW);
digitalWrite(LED_Y, LOW);
digitalWrite(LED_G, LOW);
printf("LED_G ON...\n");
delay(0);


}

return 0;
}
