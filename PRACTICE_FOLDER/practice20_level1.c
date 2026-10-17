#include <stdio.h>

int main()
{
  int numbers[] = {3, -1, 7, 0, 9};
  int length = sizeof(numbers) / sizeof(numbers[0]);
  int i;

  printf("%zu\n", sizeof(numbers));
  printf("%zu\n", sizeof(numbers[0]));

  for (i = 0; i < length; i++)
  {
    if (numbers[i] < 0)
    {
      continue; // skip negative numbers
    }
    if (numbers[i] == 0)
    {
      break; // stop loop when zero is found
    }
    printf("%d\n", numbers[i]);
  }

  return 0;
}