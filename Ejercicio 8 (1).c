#include <stdio.h>
#include <stdlib.h>

void DC(int matriz[][6], int filas, int columnas) 
{
	printf("Ingrese los elementos de la matriz (%d x %d):\n", filas, columnas);
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++) 
		{
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("La matriz es:\n");
	for (int i = 0; i < filas; i++) 
	{
		for (int j = 0; j < columnas; j++) 
		{
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

void result(int matriz[][6], int filas, int columnas, int *contadorNegativos) 
{
	*contadorNegativos = 0;
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++) {
			
			if (matriz[i][j] < 0) 
			{
				(*contadorNegativos)++;
			}
		}
	}
}

int c(int matriz[][6], int filas, int columnas) 
{
	int cont = 0;
	for (int i = 0; i < filas && i < columnas; i++) 
	{
		if (matriz[i][i] == 0) 
		{
			cont++;
		}
	}
	return cont;
}

int main() 
{
	int filas = 5,columnas = 6,matriz[filas][6], D0;
	
	DC(matriz, filas, columnas);
	
	int negativos;
	result(matriz, filas, columnas, &negativos);
	D0 = c(matriz, filas, columnas);
	
	printf("\n CANT NUM NEGATIVOS: %d", negativos);
	printf("\n CANT CEROS EN DP: %d\n", DC);
	
	return 0;
}

