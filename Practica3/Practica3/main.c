#include <8051.h>

void main()
{
unsigned int i, j, b = -1, c = -1, d = -1, e = -1, f = -1;
unsigned char *str="1234567890";

P0 = 0x97;
P2 = 0x1;
P2 = 0x0;
P0 = 0x7;
P2 = 0x1;
P2 = 0x0;

for(i = 22; i > 0; i--)
{
if (i == 22) {P0 = 0xA2;  P2 = 0x3; P2 = 0x2; }
if (i == 21) {P0 = 0xAF; P2 = 0x3; P2 = 0x2; }
if (i == 20) {P0 = 0xAE; P2 = 0x3; P2 = 0x2; }
if (i == 19) {P0 = 0xA4; P2 = 0x3; P2 = 0x2; }
if (i == 18) {P0 = 0xAF; P2 = 0x3; P2 = 0x2; }
if (i == 17) {P0 = 0xAB; P2 = 0x3; P2 = 0x2; }
if (i == 16) {P0 = 0xB4; P2 = 0x3; P2 = 0x2; }
if (i == 15) {P0 = 0xB1; P2 = 0x3; P2 = 0x2; }
if (i == 14) {P0 = 0xB7; P2 = 0x3; P2 = 0x2; }
if (i == 13) {P0 = 0xA5; P2 = 0x3; P2 = 0x2; }
if (i == 12) {P0 = 0xA2; P2 = 0x3; P2 = 0x2; }
if (i == 11) {P0 = 0x00;  P2 = 0x3; P2 = 0x2; }
if (i == 10) {P0 = 0xA0;  P2 = 0x3; P2 = 0x2; }
if (i == 9) {P0 = 0xAC;  P2 = 0x3; P2 = 0x2; }
if (i == 8) {P0 = 0xA5;  P2 = 0x3; P2 = 0x2; }
if (i == 7) {P0 = 0xAB;  P2 = 0x3; P2 = 0x2; }
if (i == 6) {P0 = 0xB2;  P2 = 0x3; P2 = 0x2; }
if (i == 5) {P0 = 0xA0;  P2 = 0x3; P2 = 0x2; }
if (i == 4) {P0 = 0xAE;  P2 = 0x3; P2 = 0x2; }
if (i == 3) {P0 = 0xA4;  P2 = 0x3; P2 = 0x2; }
if (i == 2) {P0 = 0xB1;  P2 = 0x3; P2 = 0x2; }
if (i == 1) {P0 = 0x00;  P2 = 0x3; P2 = 0x2; }
}

P0 = 0xC0;
P2 = 0x1;
P2 = 0x0;
P0 = 0x6;
P2 = 0x1;
P2 = 0x0;

for(i = 8; i > 0; i--)
{
if (i == 8) {P0 = '0';  P2 = 0x3; P2 = 0x2; }
if (i == 7) {P0 = '0'; P2 = 0x3; P2 = 0x2; }
if (i == 6) {P0 = ':'; P2 = 0x3; P2 = 0x2; }
if (i == 5) {P0 = '0'; P2 = 0x3; P2 = 0x2; }
if (i == 4) {P0 = '0'; P2 = 0x3; P2 = 0x2; }
if (i == 3) {P0 = ':'; P2 = 0x3; P2 = 0x2; }
if (i == 2) {P0 = '0';  P2 = 0x3; P2 = 0x2; }
if (i == 1) {P0 = '0';  P2 = 0x3; P2 = 0x2; }
}

P0 = 0xCC;
P2 = 0x1;
P2 = 0x0;

for(i = 9; i > 0; i--)
{
if (i == 9) {P0 = 0xB2;  P2 = 0x3; P2 = 0x2; }
if (i == 8) {P0 = 0xA5; P2 = 0x3; P2 = 0x2; }
if (i == 7) {P0 = 0xB1; P2 = 0x3; P2 = 0x2; }
if (i == 6) {P0 = 0xA3; P2 = 0x3; P2 = 0x2; }
if (i == 5) {P0 = 0xA5; P2 = 0x3; P2 = 0x2; }
if (i == 4) {P0 = 0xA5; P2 = 0x3; P2 = 0x2; }
if (i == 3) {P0 = 0xA2;  P2 = 0x3; P2 = 0x2; }
if (i == 2) {P0 = 0xA9;  P2 = 0x3; P2 = 0x2; }
if (i == 1) {P0 = 0xB8;  P2 = 0x3; P2 = 0x2; }
}

while(1)
{
	for(i = 0; i <= 9; i++)
	{
	P0 = 0xC7;
	P2 = 0x1;
	P2 = 0x0;
	P0 = str[i];  
	P2 = 0x3; 
	P2 = 0x2;
	if(i == 9)
	{
		if(b == 9) b = -1;
		b++;
		P0 = 0xC6;
		P2 = 0x1;
		P2 = 0x0;
		if(b < 5)
		{
		P0 = str[b];  
		P2 = 0x3; 
		P2 = 0x2;
		}
		if (b == 5 && i == 9)
		{
			b = 9;
			P0 = 0xC6;
			P2 = 0x1;
			P2 = 0x0;
			P0 = str[b];  
			P2 = 0x3;
			P2 = 0x2;
			if(c == 9) c = -1;
			c++;
			P0 = 0xC4;
			P2 = 0x1;
			P2 = 0x0;
			if(c < 9)
			{
			P0 = str[c];  
			P2 = 0x3; 
			P2 = 0x2;
			}
			if(c == 9 && b == 9 && i == 9)
			{
				c = 9;
				P0 = 0xC4;
				P2 = 0x1;
				P2 = 0x0;
				P0 = str[c];  
				P2 = 0x3;
				P2 = 0x2;
				if(d == 5) d = -1;
				d++;
				P0 = 0xC3;
				P2 = 0x1;
				P2 = 0x0;
				if(d < 5)
				{
				P0 = str[d];  
				P2 = 0x3; 
				P2 = 0x2;
				}
				if(d == 9 && c == 9 && b == 9 && i == 9)
				{
					d = 9;
					P0 = 0xC3;
					P2 = 0x1;
					P2 = 0x0;
					P0 = str[d];  
					P2 = 0x3;
					P2 = 0x2;
					if(e == 9) e = -1;
					e++;
					P0 = 0xC1;
					P2 = 0x1;
					P2 = 0x0;
					if(e < 9)
					{
					P0 = str[e];  
					P2 = 0x3; 
					P2 = 0x2;
					}
					if(e == 9 && d == 9 && c == 9 && b == 9 && i == 9)
					{
						e = 9;
						P0 = 0xC1;
						P2 = 0x1;
						P2 = 0x0;
						P0 = str[e];  
						P2 = 0x3;
						P2 = 0x2;
						if(f == 2) f = -1;
						f++;
						P0 = 0xC0;
						P2 = 0x1;
						P2 = 0x0;
						if(f < 2)
						{
						P0 = str[e];  
						P2 = 0x3; 
						P2 = 0x2;
						}
						if(f == 2 && e == 3 && d == 9 && c == 9 && b == 9 && i == 9)
						{
							e = 9;
							P0 = 0xC1;
							P2 = 0x1;
							P2 = 0x0;
							P0 = str[e];  
							P2 = 0x3;
							P2 = 0x2;
							f = 9;
							P0 = 0xC0;
							P2 = 0x1;
							P2 = 0x0;
							P0 = str[f];  
							P2 = 0x3;
							P2 = 0x2;
						}
						for(j=0; j<1;j++) continue;
					}
					for(j=0; j<1;j++) continue;
				}
				for(j=0; j<1;j++) continue;
			}
			for(j=0; j<1;j++) continue;
		}
		for(j=0; j<1;j++) continue;
	}
	for(j=0; j<1;j++) continue;
	}
}
}