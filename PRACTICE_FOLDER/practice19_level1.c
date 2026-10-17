#include <stdio.h>

int main()
{
	int sensores[4] = {23, 45, 56, 88};
	int *ptr = sensores;
	for (int i = 0; i < 4; i++)
	{
		printf("La muestra es: %d\n", *(ptr + i));
		printf("La direccion de la muestra es muestra es: %p\n", ptr + i);
		*(ptr + i) += 5;
		printf("La muestra es: %d\n", *(ptr + i));
	}
	return 0;
}