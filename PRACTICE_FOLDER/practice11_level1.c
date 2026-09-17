#include <stdio.h>
#define TAM 8

void llenarArray(int array[], int tamano);
void mostrarArray(int array[], int tamano);
int contarNumerosPares(int array[], int tamano);
void remplazarNegativos(int array[], int tamano);
void menuCalculadora(int eleccion, int array[], int tamano);

int main()
{
	int array[TAM];
	int eleccion;

	do
	{
		printf("\nBienvenido al menu \n");
		printf("Seleccione una opcion \n");
		printf("1- Llenar Array \n");
		printf("2- Mostrar Array y Direcciones \n");
		printf("3- Conteo de numeros pares \n");
		printf("4- Remplazar negativos \n");
		printf("5- Salir del menu \n");
		printf("Opcion seleccionada:  ");
		scanf("%d", &eleccion);
		menuCalculadora(eleccion, array, TAM);
	} while (eleccion != 5);

	return 0;
}

void llenarArray(int array[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		printf("\nIngrese el valor de indice %d: \n", i);
		scanf("%d", &array[i]);
	}
}
void mostrarArray(int array[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		printf("\nEl valor de la posicion %d es: %d \n", i, array[i]);
	}
}
int contarNumerosPares(int array[], int tamano)
{
	int conteo = 0;
	for (int i = 0; i < tamano; i++)
	{
		if (array[i] % 2 == 0)
		{
			conteo++;
		}
	}
	return conteo;
}
void remplazarNegativos(int array[], int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		if (array[i] < 0)
		{
			array[i] = 0;
		}
	}
	for (int j = 0; j < tamano; j++)
	{
		printf("\nEl valor de la posicion %d es: %d \n", j, array[j]);
	}
}

void menuCalculadora(int eleccion, int array[], int tamano)
{
	int con = contarNumerosPares(array, TAM);
	switch (eleccion)
	{
	case 1:
		llenarArray(array, TAM);
		break;
	case 2:
		mostrarArray(array, TAM);
		break;
	case 3:
		printf("La cantidad de numero pares es de: %d \n ", con);
		break;
	case 4:
		remplazarNegativos(array, TAM);
		break;
	case 5:
		printf("Salir del Menu");
		break;
	default:
		printf("Opcion invalida");
		break;
	}
}