#include <stdio.h>
#include <conio.h>
int main()
{
   int A, b,A1,b1,d1,e1;
   short int c, c1;
  //ввод данных
   printf ("Enter A-->");
   scanf ("%d",&A);
   printf ("Enter b-->");
   scanf ("%d",&b);
   printf ("Enter c-->");
   scanf ("%hd",&c);
   // копируем данные в резервные переменные
   A1 = A;
   b1 = b;
   c1 = c;
   // вывод данных
    printf ("A=%d, b=%d, c=%hd",A,b,c);
   // вычисляем значение выражения и выводим результат
   A %= b++ + --c % b;
   printf ("\nA=%d, b=%d, c=%hd",A,b,c);
   //вычисляем значение выражения по действиям
   c1 = c1 - 1;
   d1 = c1 % b1;
   d1 = b1 + d1;
   b1 = b1 + 1;
   A1 %= d1;
   printf ("\nA1=%d, b1=%d, c1=%hd",A1,b1,c1);
   getch();
   return 0;
}

