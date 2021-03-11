#include <stdio.h>
#include <stdlib.h>



int** Make2DDoubleArray(int arraySizeX, int arraySizeY) {
	int** theArray;
	theArray = (int**)malloc(arraySizeX * sizeof(int*));
	for (int i = 0; i < arraySizeX; i++) 
		theArray[i] = (int*)malloc(arraySizeY * sizeof(int));

	return theArray;
}


void limpiar(int** array, int nx) {
	for (int i = 0; i < nx; i++) {
		free(array[i]);
	}
	free(array);
}


void imprimir(int** array, int nx, int ny)
{
	for (int i = 0; i < nx; ++i)
	{
		for (int j = 0; j < ny; ++j)
		{
			printf("%d\t", array[i][j]);
		}
		printf("\n");
	}
}


void cambiarElementos(int** MyArray, int nx, int ny) {
	for (int i = 0; i < nx; ++i)
	{
		for (int j = 0; j < ny; ++j)
		{
			MyArray[i][j] = 0;
		}
	}
}


int main() {

	int nx = 10;
	int ny = 10;

	int** myArray = Make2DDoubleArray(nx, ny);
	cambiarElementos(myArray, nx, ny);
	imprimir(myArray, nx, ny);


	return 0;
}