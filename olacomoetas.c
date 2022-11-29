#include <stdio.h>

int main()
{
	int i,tmp;
	int lista[8] = {10, 30, 20, 100, 99, 80, 101, 17};
	
	for(i=0; i<7; i++)
	{
	if(tmp<lista[i])
	{
	tmp=lista[i];
	}

	}
	printf("el numero mayor es: %i", tmp);	
return 0;
}
