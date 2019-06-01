#include<wiringPi.h>
#include<stdio.h>
int main(void)
{
int dec=87;


wiringPiSetup();
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(8,OUTPUT);
	


	if(dec==8)
	{
		digitalWrite(2,0);
		digitalWrite(3,0);
		digitalWrite(4,0);
		digitalWrite(5,0);
		digitalWrite(6,0);
		digitalWrite(7,0);
		digitalWrite(8,0);
	}
	else if(dec==0)
	{
		digitalWrite(2,0);
		digitalWrite(3,0);
		digitalWrite(4,0);
		digitalWrite(5,0);
		digitalWrite(6,0);
		digitalWrite(7,0);
		digitalWrite(8,1);
	}
	else
	{
		
	     digitalWrite(2,0);
		digitalWrite(3,1);
		digitalWrite(4,1);
		digitalWrite(5,0);
		digitalWrite(6,0);
		digitalWrite(7,0);
		digitalWrite(8,0);
	}
}

