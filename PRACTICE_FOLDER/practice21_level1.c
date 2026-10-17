#include <stdio.h>
// Opción A: Usando Notación de Arreglo (ptr[i])
void filtrarSensores1(int *ptr, int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		if (ptr[i] < 0)
		{				// Sin asterisco
			ptr[i] = 0; // Sin asterisco
		}
		printf("%d\n", ptr[i]);
	}
}
// Opción B: Usando Puntero Incremental Puro (*ptr y ptr++)
void filtrarSensores2(int *ptr, int tamano)
{
	for (int i = 0; i < tamano; i++)
	{
		if (*ptr < 0)
		{
			*ptr = 0;
		}
		printf("%d\n", *ptr);
		ptr++;
	}
}
// Opción A: Usando Notación de Arreglo (ptr[i])
void filtrarSensores21(int *ptr, int tamano)
{
	int i = 0;
	while (i < tamano)
	{
		if (ptr[i] < 0)
		{				// Sin asterisco
			ptr[i] = 0; // Sin asterisco
		}
		printf("%d\n", ptr[i]);
		i++;
	}
}
// Opción B: Usando Puntero Incremental Puro (*ptr y ptr++)
void filtrarSensores22(int *ptr, int tamano)
{
	int i = 0;
	while (i < tamano)
	{
		if (*ptr < 0)
		{
			*ptr = 0;
		}
		printf("%d\n", *ptr);
		ptr++;
		i++;
	}
}
int main()
{
	int lecturas[5] = {23, -5, 18, -12, 30};
	int *ptr = lecturas;
	int size = sizeof(lecturas) / sizeof(lecturas[0]);

	filtrarSensores1(ptr, size);
	printf("\n\n");
	filtrarSensores2(ptr, size);
	printf("\n\n");
	filtrarSensores21(ptr, size);
	printf("\n\n");
	filtrarSensores22(ptr, size);
	printf("\n\n");

	return 0;
}