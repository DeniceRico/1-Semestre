#include <stdio.h>

int main()
{
	int edad, ano;
	int actual = 2022;
	
	printf("Ingresa tu edad\n");
	scanf("%d", &edad);

	do
	{
		ano = actual - edad;
		printf("Tu ano de nacimiento es: %d\n", ano);
		
		printf("Ingrese otra edad:");
		scanf("%d", &edad);
	}
	while (edad>18);
	printf("Fin del programa y de do-while");
	
	
	return 0;
}
