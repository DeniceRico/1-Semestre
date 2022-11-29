//hacer un switch case,1- una funcion que va pedir nombres (2 de estas, nombre y 2- apellido), 3- otra que va a leer nombres, 4- suma1, 5- suma2, 6- salir //
//funcion (tienen dos parentesis), lo que va entre los parentesis son argumentos, puede ser una variable o operacion//
// una funcion hace uso de argumentos, valor de retorno, memoria, nombre de la funcion//
//funcion, el int es paraque cuando un programa acabe regrese un entero, void es para que no regrese nada//
#include <stdio.h>
void pedirnombres()
{
	
printf("Escriba sus nombres:\n");	

	
}
void pedirapellidos()
{
	
	printf("Escriba sus apellidos:\n");
	
}
void leernombres()
{
	
	printf("Tu nombre completo es:\n");
	
}
int suma1()
{
	
	int x, y;
	int R;
	printf("(suma1)ingrese operando1:\n");
	scanf("%d", &x);
	printf("(suma1)ingrese operando2:\n");
	scanf("%d", &y);
	R=x+y;
	printf("resultado: %d", R);
	return R;
	
}
void suma2(int a1, int b1)
{
	
int Res;
Res=a1+b1;
printf("El resultado es: %d", Res);
	
}
int main()
{
int sel;	
char nombres[15];
char apellidos[15];
int resultado;
int a, b;



while(sel<6)
{
	
printf("Elige una opcion: 1-nombres, 2-apellidos, 3-leer nombres, 4-suma1, 5-suma2, 6-salir: \n");
scanf("%d", &sel);

switch(sel)
{
case 1: pedirnombres(); break;
case 2: pedirapellidos(); break;
case 3: leernombres(); break;
case 4: resultado = suma1(); 
printf("\nresultado de suma1: %d\n", resultado);
case 5: 
printf("ingrese operando1:\n");
scanf("%d", &a);
printf("ingrese operando2:\n");
scanf("%d", &b);
suma2(a,b); break;
	
}	
}



return 0;
}
	
	

