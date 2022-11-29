#include <stdio.h>
int main()
{
	int i=5, temp=1;
	
	printf("Dame el valor del factorial:\n");
	scanf("%d", &i);
	
	

	
	do{
	
	for(i; i>=1; i--)
	{
		
		temp = i * temp;
	printf("\nEl valor de temporal es: %d", temp);
		
	}
		printf("\nDame otro valor");
		scanf("%d", &i);
}

	while (i!=666);
	printf("Fin");	
	
	 return 0;
	
	
}
