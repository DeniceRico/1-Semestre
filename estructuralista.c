#include <stdio.h>

struct datos{
	int lista[8];
	int tmp;
	int i;
};

int main()
{
	struct datos A;
	A.lista[0]=10;
	A.lista[1]=30;
	A.lista[2]=20;
	A.lista[3]=100;
	A.lista[4]=99;
	A.lista[5]=80;
	A.lista[6]=101;
	A.lista[7]=17;
	A.tmp=0;
	A.i=0;
	
	int i,tmp;
	int lista[8] = {10, 30, 20, 100, 99, 80, 101, 17};
	
	for(i=0; i<8; i++)
	{
	if(tmp<lista[i])
	{
	tmp=lista[i];
	}

	}
	printf("el numero mayor es: %i", tmp);	
return 0;
}
