#include <stdio.h>

void ascendente(int a, int b, int c)
{
	int aux1, aux2, aux3;
	if (a > b && a > c)
	{
		if (b > c)
		{
			aux3 = a;
			aux2 = b;
			aux1 = c;
			printf("%d %d %d\n", aux1, aux2, aux3);
		}
		else
		{
			aux3 = a;
			aux2 = c;
			aux1 = b;
			printf("%d %d %d\n", aux1, aux2, aux3);
		}
	}
	if (b > c && b > a)
	{
		if (c > a)
		{
			aux3 = b;
			aux2 = c;
			aux1 = a;
			printf("%d %d %d\n", aux1, aux2, aux3);
		}
		else
		{
			aux3 = b;
			aux2 = a;
			aux1 = c;
			printf("%d %d %d\n", aux1, aux2, aux3);
		}
	}
	if (c > a && c > b)
	{
		if (b > a)
		{
			aux3 = c;
			aux2 = b;
			aux1 = a;
			printf("%d %d %d\n", aux1, aux2, aux3);
		}
		else
		{
			aux3 = c;
			aux2 = a;
			aux1 = b;
			printf("%d %d %d\n", aux1, aux2, aux3);
		}
	}
}

int main(void)
{
	while (1)
	{
		int muestra1, muestra2, muestra3;
		printf("Ingresa las muestras para ordenar: \n");
		scanf("%d %d %d", &muestra1, &muestra2, &muestra3);
		ascendente(muestra1, muestra2, muestra3);
	}
	return 0;
}