//Contador: cuenta un numero, se necesita pedir un numero, 
 #include <stdio.h>
 int main ()
 {
 	int a;
 	 printf("dame un numero del 0 al 10:\n");
 	 scanf("%i", &a);
 	
 		while (a<10)
 	{  
      	a++;
 	if(a==10)
	 {
 	printf("\nContador llego a su fin\n");
	 }
 

	 else
 	{
 		 printf("\nEl contador va en: %d\n",a);
 	}
 	
	 }
 

 	
	 return 0;
 }
 
