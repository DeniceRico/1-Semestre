#include <stdio.h>

struct cliente 
{
	float peso;
	int altura;
	char nombre[40];
	char sexo;
	char telefono[12];
	int fecha[3];
	int edad;
};
struct proveedor
{
	char suplementos[20];
	char papeleria[20];
	char contador[20];
	int facturas;

};
void llenarproveedor (struct proveedor *CC)
{
	printf("\nIngrese su suplemento:");
scanf("%c", &CC->suplementos);
	printf("\nIngrese su papeleria de confianza:");
scanf("%c", &CC->papeleria);
	printf("\nIngrese su contador:");
scanf("%c", &CC->contador);
	printf("\nIngrese sus facturas:");
scanf("%d", &CC->facturas);
	
	
	
}
void imrpimirproveedor (struct proveedor DD)
{
		printf("\nSu suplemento es:", DD.suplementos);
		printf("\nSu papeleria es:", DD.papeleria);
		printf("\nSu contador es:", DD.contador);
		printf("\nSus facturas son:", DD.facturas);
		
	
	
}



void imprimircliente (struct cliente AA)
{
	

	printf("\nSus datos son:\nNombre:%s \nAltura: %d \nPeso: %1f \nSexo: %c \nTelefono: %s \nFecha de nacimiento: %d %d %d \nEdad: %d",AA.nombre, AA.altura, AA.peso,AA.sexo, AA.telefono, AA.fecha[0], AA.fecha[1], AA.fecha[2],AA.edad);
	

	
}
void llenarcliente (struct cliente *BB)//EL ASTERISCO RECIBE DIRECCION DE MEMORIA (PASO POR REFERNCIA)
{
	
	printf("Ingrese su nombre:");
gets(BB->nombre);

printf("\nIngrese su altura en centimetros:");
scanf("%d", &BB->altura);

printf("\nIngrese su peso:");
scanf("%f", &BB->peso);

printf("\nsexo:");
scanf(" %c", &BB->sexo);

printf("\nIngrese numero de telefono:");
scanf("%s", &BB->telefono);

printf("\nIngrese su fecha de nacimiento:");
printf("\nDia:");
scanf(" %d", &BB->fecha[0]);
printf("\nMes:");
scanf(" %d", &BB->fecha[1]);
printf("\nAno:");
scanf(" %d", &BB->fecha[2]);

BB->edad=2022-BB->fecha[2];
	
	
}
int main()
{
	struct cliente Prueba1;
	llenarcliente (&Prueba1);
	imprimircliente (Prueba1);

	struct proveedor Prueba2;
	llenarproveedor (&Prueba2);

		return 0;
}
