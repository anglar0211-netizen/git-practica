#include <stdio.h>

void sumar(void)
{
	float a, b, resultado;
	printf("Ingrese los numeros para la operacion: ");
	scanf("%f %f", &a, &b);
	resultado = a + b;
	printf("Tu resultado es = %.2f\n", resultado);
}
void restar(void)
{
	float a, b, resultado;
	printf("Ingrese los numeros para la operacion: ");
	scanf("%f %f", &a, &b);
	resultado = a - b;
	printf("Tu resultado es = %.2f\n", resultado);
}
void multiplicar(void)
{
	float a, b, resultado;
	printf("Ingrese los numeros para la operacion: ");
	scanf("%f %f", &a, &b);
	resultado = a * b;
	printf("Tu resultado es = %.2f\n", resultado);
}
void dividir(void)
{
	float a, b, resultado;
	printf("Ingrese los numeros para la operacion: ");
	scanf("%f %f", &a, &b);
	resultado = a / b;
	printf("Tu resultado es = %.2f\n", resultado);
}
void menu(void)
{
	int eleccion;
	do
	{

		printf("Bienvenido al menu\n");
		printf("Seleccione una de las 4 opciones\n 1.- Sumar\n 2.- Restar\n 3.- Multiplicar\n 4.- Dividir\n 5.- Salir\n");
		printf("Seleccion:  ");
		scanf("%d", &eleccion);

		switch (eleccion)
		{
		case 1:
			sumar();
			break;
		case 2:
			restar();
			break;
		case 3:
			multiplicar();
			break;
		case 4:
			dividir();
			break;
		case 5:
			printf("Saliendo del menu");
			break;
		default:
			printf("Seleccion invalida");
			break;
		}
	} while (eleccion != 5);
}

int main()
{
	menu();
	return 0;
}