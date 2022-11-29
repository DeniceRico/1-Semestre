#include <stdio.h>

void funcionSuma(int a,int b, int *respuesta)
{
	
	*respuesta = a + b;
	

}
void funcionResta(int a, int b, int *respuesta)
{
	
	*respuesta = a - b;
	
	
}
void funcionMultiplicacion(int a, int b, int *respuesta)
{
	
	*respuesta = a * b;
	
}
void funcionDivision(int a, int b, int *respuesta)
{
	
	*respuesta = a/b;
	
}
void funcionModulo(int a, int b, int *respuesta)
{
	
	*respuesta = a%b;
	
}
void switchito(int a, int b, int respuesta, int opcion)
{
	switch(opcion)
	{
		case 1: funcionSuma(a, b, &respuesta); printf("La dir, de memoria es: %x, %d", &respuesta, &respuesta); printf("\nEl resultado es %d", respuesta); break;
		case 2: funcionResta(a, b, &respuesta); printf("La dir, de memoria es: %d", &respuesta); printf("\nEl resultado es %d", respuesta); break;
		case 3: funcionMultiplicacion(a, b, &respuesta); printf("La dir, de memoria es: %d", &respuesta); printf("\nLa respuesta es %d", respuesta); break;
		case 4: funcionDivision(a, b, &respuesta); printf("La dir, de memoria es: %d", &respuesta); printf("\nLa respuesta es %d", respuesta); break;
		case 5: funcionModulo(a, b, &respuesta); printf("La dir, de memoria es: %d", &respuesta); printf("\nLa respuesta es %d", respuesta); break;
		default: printf("ingresa una opcion valida");
	}
	

}
void whilesito()
{
	int a, b, opcion, respuesta;
	
	printf("Bienvenido a calculadora //;w;//");



	printf("\nelige que operacion deseas realizar\n");
	printf("\n 1. suma\n 2. resta\n 3. multiplicacion\n 4. division\n 5. modulo\n 6. salir\n");
	scanf("%i", &opcion);
	
	while (opcion!=6)
	{
	

	
	printf("\ningrese dos numeros:\n");
	scanf("%d %d", &a, &b);
		
    	switchito(a, b, respuesta, opcion);
	
	printf("\ningrese la operacion a realizar:\n");
	scanf("%d",&opcion);

}
printf("ha salido de calculadora");	
}
int main()
{
	
whilesito();
	return 0;
}

