#include <stdio.h>

int main()
{
	int edad, ano;
	int actual=2022;
	
	printf("Ingresa tu edad\n");
	scanf("%d", &edad);
	
	
	while(edad>18)
	{
		
	ano=actual-edad;
	
	edad = 0;	
	
	printf("Tu ano de nacimiento es: %d\n", ano);
	
	printf("Ingrese otra edad:\n");
	scanf("%d", &edad);
	
	}
	
	printf("Fin del programa y de while");
	
	
	return 0;
	
}
