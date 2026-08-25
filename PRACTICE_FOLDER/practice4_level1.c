#include <stdio.h>
int main()
{
  int monto, millares, centenas, decenas, resi1, resi2;
  printf("Digite la cantidad a retirar: ");
  scanf("%d", &monto);
  if (monto % 20 == 0)
  {
    millares = monto / 1000;
    resi1 = monto % 1000;
    centenas = resi1 / 100;
    resi2 = resi1 % 100;
    decenas = resi2 / 20;
    printf("El numero de billetes de 1000 es: %d\n", millares);
    printf("El numero de billetes de 100 es: %d\n", centenas);
    printf("El numero de billetes de 20 es: %d\n", decenas);
  }
  else
  {
    printf("El monto ingresado no es valido, debe ser multiplo de 20");
  }
  return 0;
}