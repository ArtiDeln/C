
// Условие
// Aвтор
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main ()
{
int n, m, t ;
float a, b, c, d, hx, hy, x, y, z;
printf ("\n Vvedite [a,b] i n\n");
scanf ("%f%f%d",&a,&b,&n);
printf ("\n Vvedite [c,d] i m\n");
scanf ("%f%f%d",&c,&d,&m);
if (a < b && c < d && n > 0 && m > 0)
{
hx = (b - a) / n; 
hy = (d - c) / m; 
// рисуем шапку таблицы  
printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,203, 205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205, 205,205,205,205,205,205,205,187);
printf("\n%c  X   %c    Y   %c       Z       %c",186,186,186,186);
printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205, 206,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205, 205, 205,205,205,205,205,205,205,185);
//  циклы
for (x = a; x <= b + hx / 2; x += hx) 
		for (y = c; y <= d + hy / 2; y += hy)
                { 
                      t = 1;	// функция определена
                          if (x*y < 1) 
	                           z = x*x - 4*x*y + y*y;
                          else
	                	   if (x*y > 1) 
                        	      if (1 - x*y + y*y == 0)
		        t = 0; // деление на 0
	                          else z = 3.14/(1-x*y+y*y);
                                   else z = 1 + x*x;
                      // Исследование флага для печати результата
                     if (t == 0)
	                    printf ("\n%c%6.2f%c  %6.2f%c    Del. na 0 %c",186,x,186,y,186,186);
                      else 
    printf("\n%c%6.2f%c   %6.2f%c  %12.5f%c",186,x,186,y,186,z,186);     
}
               //заканчиваем таблицу	
printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);	
    }
    else printf("\n Nevernie dannie");
getch();
return 0;
}

