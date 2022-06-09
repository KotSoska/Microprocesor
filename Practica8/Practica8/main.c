/*#include<8051.h>

int flag = 0;

interrupt void isr_ex0(void)
{
	if (flag == 0) flag = 1;
 	else flag = 0;
}


void main()
{
	IT0 = 1;
	EX0 = 1;
	EA = 1;
	P0 = 0xff;
	P1 = 0xff;
	P2 = 0x00;

	while(1)
	{ 
		P36 = 1;
		P36 = 0;
		while(P37 == 1);
		if (flag == 1) P2 = P1;
		else P2 = P1/2;	
	}
}*/

#include<8051.h>

void main ()
{
int a = 0;
int b = 0;
int c = 0;
while(1)
{
a = P0;
b = P1;
c = b * (1 + 0.7 * a / 255);
P2 = c;
}
}
