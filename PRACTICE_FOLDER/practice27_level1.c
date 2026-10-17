#include <stdio.h>
void par(void)
{
	int num;
	printf("Ingrese el numero que quiere comparar\n");
	scanf("%d", &num);
	if (num)
	{
		if (num % 2 == 0)
		{
			printf("el numero %d es par\n", num);
		}
		else
		{
			printf("el numero %d no es par\n", num);
		}
	}
}
int main()
{
	while (1)
	{
		par();
	}
	return 0;
}