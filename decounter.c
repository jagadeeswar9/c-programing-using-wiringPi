#include<wiringPi.h>
#include"sevenseg.h"
int main(void)
{
	int i;
	wiringPiSetup();
	{
	pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(8,OUTPUT);
}
for(i=0;i<10;i++)
{
	sevenseg(i);
	delay(1000);
}
      
}
