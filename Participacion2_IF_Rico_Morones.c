#include <stdio.h>
int main()
{
	int a, b , c;
	printf("Ingresa un numero \n");
	scanf("%i", &a);
	
	printf("\nIngresa otro numero \n");
	scanf("%i", &b);
	
		c= a + b;
	
	
	if(c>10)
	{
		printf("\nEl resultado es %i y es mayor a 10", c);
    }
	
	if(c<10)
	{
		printf("\nEl resultado es: %i", c);
	}
	
	return 0;
}
