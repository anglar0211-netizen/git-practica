#include <stdio.h>

void conversor(float temp)
{
	float fahrenheit, kelvin;
	int eleccion;
	do
	{
		printf("Tu conversiones serian: \n 1. Fahrenheit\n 2. Kelvin\n 3. Salir\n");
		scanf("%d", &eleccion);
		switch (eleccion)
		{
		case 1:
			fahrenheit = (temp * (9.0 / 5.0)) + 32;
			printf("La temperatura en grados fahrenheit es %.2f F\n", fahrenheit);
			break;
		case 2:
			kelvin = temp + 273.15;
			printf("La temperatura en grados kelvin es %.2f K\n", kelvin);
			break;
		case 3:
			printf("Salir del programa");
			break;
		default:
			printf("Eleccion invalida");
			break;
		}
	} while (eleccion != 3);
}

int main(void)
{
	float temp;
	printf("Ingrese la temperatura a convertir: ");
	scanf("%f", &temp);
	conversor(temp);

	return 0;
}