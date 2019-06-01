#include<wiringPi.h>
#include<unistd.h>
void binsevenseg(int,int,int,int);
int main(void)
{
	wiringPiSetup();
	{
		int i;
		for(i=0;i<7;i++)
		pinMode(i+2,OUTPUT);
	}
	for(;;)
	{
		int dec=1;
		int E,F,G,H;
		E=dec%2;
		dec=dec/2;
		F=dec%2;
		dec=dec/2;
		G=dec%2;
		dec=dec/2;
		H=dec%2;
		dec=dec/2;
		binsevenseg(E,F,G,H);
	}
}
void binsevenseg(int A,int B,int C,int D)
{
	int p[7],i;
p[0]=(A&&!B&&!C&&!D)||(!A&&!B&&C&&!D);
p[1]=(A&&!B&&C&&!D)||(!A&&B&&C&&!D);
p[2]=!A&&B&&!C&&!D;
p[3]=(A&&!B&&!C&&!D)||(!A&&!B&&C&&!D)||(A&&B&&C&&!D);
p[4]=(A&&!B&&!C&&!D)||(A&&B&&!C&&!D)||(!A&&!B&&C&&!D)||(A&&!B&&C&&!D)||(A&&B&&C&&!D)||(A&&!B&&!C&&D);
p[5]=(A&&!B&&!C&&!D)||(!A&&B&&!C&&!D)||(A&&B&&!C&&!D)||(A&&B&&C&&!D);
p[6]=(!A&&!B&&!C&&!D)||(A&&!B&&!C&&!D)||(A&&B&&C&&!D);

for(i=0;i<7;i++)



digitalWrite(i+2,p[i]);

}
