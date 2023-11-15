#include <stdio.h>
#include <stdlib.h>

void NumNeg(int matriz[12][19]) 
{
	for (int i = 0; i < 12; i++) 
	{
		for (int j = 0; j < 19; j++)
		{
			if (matriz[i][j] < 0) 
			{
				matriz[i][j] = 0;
			}
		}
	}
}

void result(int matriz[12][19]) 
{
	printf("\n MATRIZ: \n");
	for (int i = 0; i < 12; i++) 
	{
		for (int j = 0; j < 19; j++) 
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int main() 
{
	int matriz[12][19];


	for (int i = 0; i < 12; i++) 
	{
		for (int j = 0; j < 19; j++)
		{
			printf("Ingrese los elementos de la matriz :\n");
			scanf("%d", &matriz[i][j]);
		}
	}
	result(matriz);
	NumNeg(matriz);
	result(matriz);
	
	return 0;
}
