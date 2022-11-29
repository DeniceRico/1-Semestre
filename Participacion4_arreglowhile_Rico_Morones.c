#include <stdio.h>

int main()
{
int A[6]= {10, 20, 30, 40, 50, 60};
int i=0;

while(i<=5)
{

	printf("\nEl valor de A es: %d", A[i]);
	i++;
}

i=0;
while(i<=5)//pedir datos
{
	printf("\nDame un nuevo numero para posicion i:\n");
	scanf("%d", &A[i]);
	i++;
	
}

i=0;
	while(i<=5)
{

	printf("\nEl valor de A es: %d", A[i]);
	i++;
	}
	

	return 0;
}
