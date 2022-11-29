//arreglos int a[6]={, EL 6 ES EL NUMERO DE NUMERO QUE QUEREMOS IMPRIMIR
#include <stdio.h>

int main()
{
	
	int A[6]= {12, 23, 114, 250, 3000, 260};
	
	printf("Posicion 0 tiene valor de: %d\n", A[0]);
	printf("Posicion 1 tiene valor de: %d\n", A[1]);
    printf("Posicion 2 tiene valor de: %d\n", A[2]);
	printf("Posicion 3 tiene valor de: %d\n", A[3]);
	printf("Posicion 4 tiene valor de: %d\n", A[4]);
	printf("Posicion 5 tiene valor de: %d\n", A[5]);
	
	printf("\nIngrese un valor para la posicion 0:\n");
	scanf("%d", &A[0]);
	printf("Ingrese un valor para la posicion 1:\n");
	scanf("%d", &A[1]);
	printf("Ingrese un valor para la posicion 2:\n");
	scanf("%d", &A[2]);
	printf("Ingrese un valor para la posicion 3:\n");
	scanf("%d", &A[3]);
	printf("Ingrese un valor para la posicion 4:\n");
	scanf("%d", &A[4]);
	printf("Ingrese un valor para la posicion 5:\n");
	scanf("%d", &A[5]);

    printf("\nPosicion 0 tiene valor de: %d\n", A[0]);
	printf("Posicion 1 tiene valor de: %d\n", A[1]);
    printf("Posicion 2 tiene valor de: %d\n", A[2]);
	printf("Posicion 3 tiene valor de: %d\n", A[3]);
	printf("Posicion 4 tiene valor de: %d\n", A[4]);
	printf("Posicion 5 tiene valor de: %d\n", A[5]);

A[3]= A[1] + A[2];

printf("\nEl nuevo valor de la posicion 3 es: %d", A[3]);

	return 0;
	
}


