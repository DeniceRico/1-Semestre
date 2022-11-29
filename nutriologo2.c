#include <stdio.h>
int menuopcion()
{
	int op;
	printf("Elige una opción:\n1-peso\n2-altura\n3-nombre\n4-sexo\n5-telefono\n6-fecha\n7-edad\n");
	scanf("%d", &op);
	
	return op;	
}
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



void imprimircliente (struct cliente AA, int op)
{
	int n=0;
	do
	{
	switch(op)
	{
		case 1: printf("Su peso es: %f\n",AA.peso); break;
		case 2: printf("Su altura es:%d\n",AA.altura); break;
		case 3: printf("Su nombre es:%s\n",AA.nombre); break;
		case 4: printf("Su sexo es:%c\n",AA.sexo); break;
		case 5: printf("Su telefono es:%d\n",AA.telefono); break;
		case 6: printf("Su fecha de nacimiento es:%d/%d/%d\n", AA.fecha[0], AA.fecha[1], AA.fecha[2]); break;
		case 7: printf("Su edad es:%d\n",AA.edad); break;
	
	}
	printf("\ndesea imprimir otro dato: 0-si/1-no:\n");
	scanf("%i", &n);
	if(n==0){op=menuopcion();}
	}
	while(n==0);
	

	
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
	int sel;
	llenarcliente (&Prueba1);
	sel=menuopcion();
	imprimircliente (Prueba1, sel);

	//struct proveedor Prueba2;
	//llenarproveedor(&Prueba2);

		return 0;
}
