#include <stdio.h>

int opciones()
{
	int o;
	printf("Elige una opción:\n1-cliente\n2-proveedor\n3-salir\n");
	scanf("%d", &o);
	return o;
}
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
int menuproveedor(){
	int p;
	printf("Elige una opción:\n1-suplementos\n2-papeleria\n3-contador\n4-facturas\n");
	scanf("%d", &p);
	
	return p;	
		
}
void llenarproveedor (struct proveedor *CC)
{
	printf("\nIngrese su suplemento:");
scanf(" %s", &CC->suplementos);
	printf("\nIngrese su papeleria de confianza:");
scanf(" %c", &CC->papeleria);
	printf("\nIngrese su contador:");
scanf(" %c", &CC->contador);
	printf("\nIngrese sus facturas:");
scanf(" %d", &CC->facturas);
	
	
	
}
void modificarproveedor (struct proveedor DD, int p)
{
	int n=0;
	
	printf("\ndesea modificar otro dato: 0-si/1-no:\n");
	scanf("%i", &n);
	
	if(n==0)
	{
	p=menuproveedor();
	do
		{
			switch(p)
			{
				case 1: printf("\nIngrese su suplemento:");
						scanf(" %c", &DD.suplementos);
						printf("Su suplemento es: %c\n",DD.suplementos); break;
				case 2: printf("\nIngrese su papeleria:");
		       			scanf(" %c", &DD.papeleria);
						printf("Su papeleria es:%c\n",DD.papeleria); break;
				case 3: printf("\nIngrese su contador:");
						scanf(" %c",&DD.contador);
						printf("Su contador es:%c\n",DD.contador); break;
				case 4: printf("\nIngrese sus facturas:");
						scanf(" %c", &DD.facturas);
						printf("Sus facturas son:%c\n",DD.facturas); break;
				
			
			}
		printf("\ndesea imprimir otro dato: 0-si/1-no:\n");
		scanf("%i", &n);
			if(n==0){p=menuproveedor();}
			}
		while(n==0);
	}
}
void imrpimirproveedor (struct proveedor DD, int p)
{
	int n=0;	
		do
	{
	switch(p)
	{
		case 1:	printf("\nSu suplemento es:%c", DD.suplementos); break;
		case 2: printf("\nSu papeleria es:%c", DD.papeleria); break;
		case 3: printf("\nSu contador es:%c", DD.contador); break;
		case 4: printf("\nSus facturas son:%c", DD.facturas); break;
		
	}
	printf("\ndesea imprimir otro dato: 0-si/1-no:\n");
	scanf("%i", &n);
	if(n==0)
		p=menuproveedor();
	}
	while(n==0);	
		
}

void modificarcliente (struct cliente AA, int op)
{
	int n=0;
	
	printf("\ndesea modificar otro dato: 0-si/1-no:\n");
	scanf("%i", &n);
	
	if(n==0)
	{
	op=menuopcion();
	do
		{
			switch(op)
			{
				case 1: printf("\nIngrese su peso:");
						scanf("%f", &AA.peso);
						printf("Su peso es: %f\n",AA.peso); break;
				case 2: printf("\nIngrese su altura en centimetros:");
		       			scanf("%d", &AA.altura);
						printf("Su altura es:%d\n",AA.altura); break;
				case 3: printf("Ingrese su nombre:");
						scanf(" %s",&AA.nombre);
						printf("Su nombre es:%s\n",AA.nombre); break;
				case 4: printf("\nsexo:");
						scanf(" %c", &AA.sexo);
						printf("Su sexo es:%c\n",AA.sexo); break;
				case 5: printf("\nIngrese numero de telefono:");
						scanf("%s", &AA.telefono);
						printf("Su telefono es:%d\n",AA.telefono); break;
				case 6: printf("\nIngrese su fecha de nacimiento:");
						printf("\nDia:");
						scanf(" %d", &AA.fecha[0]);
						printf("\nMes:");
						scanf(" %d", &AA.fecha[1]);
						printf("\nAno:");
						scanf(" %d", &AA.fecha[2]);
						printf("Su fecha de nacimiento es:%d/%d/%d\n", AA.fecha[0], AA.fecha[1], AA.fecha[2]); break;
				case 7: printf("Su edad es:%d\n",AA.edad); break;
			
			}
		printf("\ndesea imprimir otro dato: 0-si/1-no:\n");
		scanf("%i", &n);
			if(n==0){op=menuopcion();}
			}
		while(n==0);
	}
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
	if(n==0)
		op=menuopcion();
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
void cliente(){
	
		struct cliente Prueba1;
	int sel;
	llenarcliente (&Prueba1);
	sel=menuopcion();
	imprimircliente (Prueba1, sel);
	modificarcliente(Prueba1, sel);
	
	
}
void provee(){
	
	struct proveedor Prueba2;
	int opi;
	llenarproveedor(&Prueba2);
	opi=menuproveedor();
	imrpimirproveedor (Prueba2, opi);
	modificarproveedor (Prueba2, opi);
	
}
int main()
{	
	int opcion;
	opcion=opciones();
	switch(opcion)
	{
		case 1:cliente(); break;
		case 2:provee(); break;
		case 3: break;
		
	}
		return 0;
}
