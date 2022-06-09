#include <8051.h>

void tput(unsigned char c1)
{
	SBUF = c1; 
	while(!TI); 
	TI = 0; 
}

void main()
{
	int i;
	unsigned char src1[]={'B','O','H','D','O','K','y','P','T','C','E','B'};
	unsigned char src2[]={'A','J','I','E','K','C','A','H','D','P'};
	unsigned char src3[]={'C','E','P','G','E','E','B','u','4'};
	PCON = 0x80;
	TMOD = 0x20;
	TR1 = 1;
	TH1 = -3;
	for(i=0; i<12; i++)
	{
		ACC = src1[i]; 
		SCON = 0x50;
		tput (src1[i]);
	}
    tput(10);
	for(i=0; i<10; i++)
	{
		ACC = src2[i]; 
		SCON = 0x50;
		tput (src2[i]);
	}
	tput(10);
    for(i=0; i<9; i++)
	{
		ACC = src3[i]; 
		SCON = 0x50;
		tput (src3[i]);
	}
while(1){} 
}