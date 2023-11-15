#include <stdio.h>
#include <stdlib.h>

void lee(int vector[], int n) 
{
	int i;
	printf("Ingrese los elementos del vector: \n");
	for (i = 0; i < n; i++) 
	{
		scanf("%d", &vector[i]);
	}
}

int OV(int v[], int v2[], int n) 
{
	int i;
	for (i = 0; i < n; i++) 
	{
		v2[(i + 1) % n] = v[i];
	}
	return 0;
}

int main() 
{
	int n;
	int i;
	printf("Ingrese la cantidad de elementos que va a tener el vector: ");
	scanf("%d", &n);
	
	int v[n];
	int v2[n];
	
	lee(v, n);
	
	OV(v1, v2, n);
	
	printf("El segundo vector reorganizado es: \n");
	for (i = 0; i < n; i++) 
	{
		printf("%d ", v2[i]);
	}
	
	return 0;
}

