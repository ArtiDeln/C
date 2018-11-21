#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
	float x, f;
	int t = 1;
	printf("\n Ввежи x: ");
	scanf ("%f", &x);
	f = x < 3 ? ((x*x-4)*(x*x-4) - x) : ( x > 10 ? x + fabs(3*M_PI-x) : ( sin(x) == -1 ? t = 0 : 200 / (1 + sin(x))));
	//window(20, 10, 60, 15);
	//textbackground(2);
	//clrscr();
	t == 1 ? printf("\n При x=%-6.2f y=%-10.3f", x, f):
	printf("\n При x=%-6.2f y=Не определено", x);
	getch();
	return 0;
}
