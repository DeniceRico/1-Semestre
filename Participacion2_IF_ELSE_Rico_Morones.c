#include <stdio.h>
int main()
{
	int a, b , c;
	printf("Ingresa un numero \n");
	scanf("%i", &a);
	
	printf("\nIngresa otro numero \n");
	scanf("%i", &b);
	
		c= a + b;
	
	
	if(!(c%2))
	{
		printf("\nEl resultado es %i y es PAR", c);
    }
	
	else
	{
		printf("\nEl resultado es: %i y es IMPAR", c);
	}
	
	return 0;
}
