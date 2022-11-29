#include <stdio.h>
#include <math.h>
int main ()
{
int a=10, c=5;
double b=33;
double RR, RP, x;
double ResP, ResN;

printf("dame el valor de a:\n");
scanf("%d", &a);
printf("dame el valor de b:\n");
scanf("%lf", &b);
printf("dame el valor de c:\n");
scanf("%d", &c);

RP= pow (b,2);
x= RP - (4*a*c);
RR= sqrt (x);
ResP= (-b+RR)/(2*a);
ResN= (-b-RR)/(2*a);
printf("Resultado + es: %f\n", ResP);
printf("Resultado - es: %f\n", ResN);
return 0;
}

