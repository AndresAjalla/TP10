#include <stdio.h>
#include <stdlib.h>

void TV(int ventas [5][5],int fila,int col)
{
	for(fila=0;fila<5;fila++)
	{
		printf("Ingrese el numero de ventas del empleado %d durante la semana: \n",fila+1);
		for(col=0;col<5;col++)
		{
			printf("Dia %d: $",col+1);
			scanf("%d",&ventas[fila][col]);
		}
	}
}

int mventa(int ventas [5][5],int fila,int col) 
{
	int MV=0;
	for(fila=0;fila<5;fila++)
	{
		for(col=0;col<5;col++)
		{
			if(ventas[fila][col]>MV)
			{
				MV=ventas[fila][col];
			}
		}
	}
	printf("Mayor venta realizada: $%d\n",MV);
	
	return MV;
}

int main()
{
	int ventas[5][5]={0},fila=0,col=0;
	
	TV(ventas,fila,col);
	mventa(ventas,fila,col);
	
	system("pause");
	return 0;
}
