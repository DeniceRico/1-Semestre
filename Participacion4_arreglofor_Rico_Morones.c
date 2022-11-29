#include <stdio.h>

int main()
{
int A[6]= {10, 20, 30, 40, 50, 60};
int i=0;

for(i=0; i<=5; i++)
{
	printf("\nEl valor de A es: %d", A[i]);
	
}

for(i=0; i<=5; i++)	
{
	printf("\nDame un nuevo numero para posicion i:\n");
	scanf("%d", &A[i]);
	
}

for(i=0; i<=5; i++)
{
	printf("\nEl valor de A es: %d", A[i]);
	
}
	
		return 0;
}
