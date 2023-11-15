#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int m(int matriz[4][4],int fila, int col)
{
	int c=0;
	for(fila=0;fila<4;fila++)
	{
		for(col=0;col<4;col++)
		{
			matriz[fila][col]=rand()%10;
			if(matriz[fila][col]==0)
			{
				c++;
			}
		}
	}
	printf("\n\n");
	//printf("%d",ceros);
	
	return c;
}
	
void resul(int matriz[4][4],int fila,int col)
{
	printf("Matriz generada: \n");
	for(fila=0;fila<4;fila++)
	{
		for(col=0;col<4;col++)
		{
			printf("%d ",matriz[fila][col]);
		}
		printf("\n");
	}
}

int main()
{
	int matriz[4][4],fila=0,col=0,cont0;
	
	cont0=m(matriz,fila,col);
	
	
	resul(matriz,fila,col);
	
	
	
	printf("Cantidad de ceros en la matriz: %d\n",cont0);
	
	system("pause");
	return 0;
}
	
