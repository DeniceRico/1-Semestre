//pedir nombres, pedir apellidos, imprimir nombres y apellidos, pedir seleccion que haga referencia del 1 al 4, imprimir a partir de la seleccion//
#include <stdio.h>
int main()
{
	int n;
	char n1[15];
	char n2[15];
	char a1[15];
	char a2[15];
	
	printf("Ingresa tu nombre: ");
	scanf("%s", &n1);
	printf("ingresa tu segundo nombre: ");
	scanf("%s", &n2);
	printf("Ingresa tu primer apellido: ");
	scanf("%s", &a1);
	printf("Ingresa tu segundo apellido: ");
	scanf("%s", &a2);
	
	printf("Ingresa una opcion:\n1. segundo apellido, 2. primer nombre, 3. primer apellido, 4. segundo nombre:\n");
	scanf("%d", &n);
	
	
	while(n<=4)
	{
	
	switch (n)
	{
		case 1: printf("tu segundo apellido es: %s ", a2); break;
		case 2: printf("tu primer nombre es: %s ", n1); break;
		case 3: printf("tu primer apellido es: %s ", a1); break;
		case 4: printf("tu segundo nombre es: %s ", n2); break;	
	}

	
	printf("\nIngresa tu nombre: ");
	scanf("%s", &n1);
	printf("ingresa tu segundo nombre: ");
	scanf("%s", &n2);
	printf("Ingresa tu primer apellido: ");
	scanf("%s", &a1);
	printf("Ingresa tu segundo apellido: ");
	scanf("%s", &a2);
	
	printf("Ingresa una opcion:\n1. segundo apellido, 2. primer nombre, 3. primer apellido, 4. segundo nombre:\n");
	scanf("%d", &n);
	
	
}
    
	
	
	
	
	return 0;
}
