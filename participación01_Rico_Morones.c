#include <stdio.h>
int main()
{
char a='C';
short b= 5; //16 bits -32,738 ... 32,737
int c= 6;//32 bits -2,147,483,648 ... 2,147,483,648
long d=9;//32 bits -2,147,483,648 ... 2,147,483,647
float e=3;//32 bits 1.17549e-38 ... 3.40282e+38
double f=4;//64 bits 2.22507e-308 ... 1.79769e+308

printf("Dame el valor de a: \n");
scanf("%c", &a);
printf("Este es el valor del caracter (char): %c \n", a);

printf("\nDame el valor de b: \n");
scanf("%hd", &b);
printf("\nEste es el valor del caracter (short): %hd \n", b);

printf("\nDame le valor de c: \n");
scanf("%i", &c);
printf("\nEste es el valor del caracter (int): %i \n", c);

printf("\nDame el valor de d: \n");
scanf("%li", &d);
printf("\nEste es el valor del caracter (long): %li \n", d);

printf("\nDame el valor de e: \n");
scanf("%f", &e);
printf("\nEste es el valor del caracter (float): %f \n", e);

printf("\nDame el valor de f: \n");
scanf("%lf", &f);
printf("\nEste es el valor del caracter (double): %lf \n", f);

return 1;
}
