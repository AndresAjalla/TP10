#include <stdio.h>
#include <stdlib.h>

void m(int matriz[15][12],int fila,int col) 
{
	for(fila=0;fila<15;fila++)
	{
		for(col=0;col<12;col++)
		{
			printf("\n Ingresar el numero de la fila %d col %d: ",fila+1,col+1);
			scanf("%d",&matriz[fila][col]);
		}
		printf("\n\n");
	}
}
void v(int matriz[15][12],int fila,int col) 
{
	int menor=0,spc=0,en=0;
	if(fila==0 && col==0)
	{
		menor=matriz[fila][col];
	}
	else if(matriz[fila][col]<menor)
	{
		menor=matriz[fila][col];
	}
	if(fila<5)
	{
		spc+=matriz[fila][col];
	}
	if(col>=4 && col<=8 && matriz[fila][col]<0)
	{
		en++;
	}
	
	printf("\n MENOR ELEMENTO: %d", menor);
	printf("\n SUMA DE LAS 5 FILAS: %d", spc);
	printf("\n CANT NUMEROS NEGATIVOS EN FILA 5 y 9: %d", en);
}

int main()
{
	int matriz[15][12],fila=0,col=0;
	
	m(matriz,fila,col);
	v(matriz,fila,col);
	
	return 0;
}
