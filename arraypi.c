#include<wiringPi.h>
#include<unistd.h>
void sevenseg(int);

int main(void)
{
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

for(;;)
{
	
	sevenseg(5);
	
}

}
void sevenseg(int dec)
{
	int p[7],i;
	for(i=0;i<7;i++)
	p[i]=0;
	switch(dec)
	{
		case 0:
		p[6]=1;
		break;
		case 1:
		p[0]=1,p[3]=1,p[4]=1,p[5]=1,p[6]=1;
		break;
		case 2:
		p[1]=1,p[5]=1;
		break;
		case 3:
		p[4]=1,p[5]=1;
		break;
		case 4:
		p[0]=1,p[3]=1,p[4]=1;
		break;
		case 5:
		p[1]=1,p[4]=1;
		break;
		case 6:
		p[1]=1;
		break;
		case 7:
		p[3]=1,p[4]=1,p[5]=1,p[6]=1;
		break;
		case 8:
		break;
		case 9:
		p[4]=1;
		break;
		default:
		p[1]=1,p[2]=1;
		break;
	}
	for(i=0;i<7;i++)
	digitalWrite(i+2,p[i]);
}
		

