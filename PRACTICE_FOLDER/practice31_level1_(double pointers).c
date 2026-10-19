// first exercise to understand double pointers and how to use them in C.
#include <stdio.h>
void insertarConFiltro(int *buffer, int size, int **ptrEscritura, int nuevoValor)
{
	// ptrEscritura = a la direccion donde esta el primer puntero, *ptrEscritura = a la direccion de memoria que tiene almacenda del dato original
	//  y **ptrEscritura = el valor que esta alamacenado en el primer puntero
	if (nuevoValor < 0)
	{
		nuevoValor = 0;
	}
	**ptrEscritura = nuevoValor;
	(*ptrEscritura)++;
	if (*ptrEscritura == (buffer + size))
	{ // solo como seguro de que no se vaya ir en el while un salto mas
		*ptrEscritura = buffer;
	}
}
int contarMuestrasValidas(int *inicio, int *fin)
{
	int contador = 0;
	while (inicio < fin)
	{
		if (*inicio > 0)
		{
			contador++;
		}
		inicio++;
	}
	return contador;
}

int main()
{
	int datos[5] = {0};
	int size = 5;
	int *pWrite = datos; // Apunta al inicio

	insertarConFiltro(datos, size, &pWrite, 150);
	insertarConFiltro(datos, size, &pWrite, -20);
	insertarConFiltro(datos, size, &pWrite, 80);
	insertarConFiltro(datos, size, &pWrite, -50);

	printf("El numero de veces que fueron aprobadas son: %d\n", contarMuestrasValidas(datos, pWrite));

	insertarConFiltro(datos, size, &pWrite, 200);
	insertarConFiltro(datos, size, &pWrite, 300);

	printf("Direccion despues del rebote: %p\n", (void *)pWrite); // En C, cuando quieres imprimir una dirección de memoria en hexadecimal
	printf("Direccion base del buffer[0]: %p\n", (void *)datos);  //(usando el formato %p), la regla formal de C exige convertir (castear) ese
																  // puntero al tipo genérico void*

	return 0;
}
