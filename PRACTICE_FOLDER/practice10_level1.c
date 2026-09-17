#include <stdio.h>
#define TAM 8

void llenarArray(int array[], int tamano);
void mostrarArray(int array[], int tamano);
void invertirArray(int array[], int tamano);
int buscarElemento(int array[], int tamano);
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
		printf("3- Invertir array \n");
		printf("4- Buscar Elemento \n");
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
void invertirArray(int array[], int tamano)
{
	int time, aux;
	time = tamano / 2;
	for (int i = 0; i < time; i++)
	{
		aux = array[i];
		array[i] = array[tamano - i - 1];
		array[tamano - i - 1] = aux;
	}
	for (int j = 0; j < tamano; j++)
	{
		printf("\nEl valor de la posicion %d es: %d \n", j, array[j]);
	}
}
int buscarElemento(int array[], int tamano)
{
	int elemento, bandera, a;
	bandera = 1;
	printf("\nIngrese el numero quiere buscar: ");
	scanf("%d", &elemento);
	for (int i = 0; i < tamano; i++)
	{
		if (array[i] == elemento)
		{
			bandera--;
			return i;
		}
	}
	if (bandera == 1)
	{
		a = -1;
		return a;
	}
}

void menuCalculadora(int eleccion, int array[], int tamano)
{
	switch (eleccion)
	{
	case 1:
		llenarArray(array, TAM);
		break;
	case 2:
		mostrarArray(array, TAM);
		break;
	case 3:
		invertirArray(array, TAM);
		break;
	case 4:
		printf("\\\\");
		int posicion = buscarElemento(array, TAM);
		if (posicion != -1)
		{
			printf("Este es la posicion de ese elemento: %d", posicion);
		}
		else
		{
			printf("Tu elemento no se encuentra en este arreglo: %d\n", posicion);
		}
		break;
	case 5:
		printf("Salir del Menu");
		break;
	default:
		printf("Opcion invalida");
		break;
	}
}