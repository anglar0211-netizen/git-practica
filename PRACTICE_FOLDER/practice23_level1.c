#include <stdio.h>

unsigned int sum_of_squares(unsigned int number)
{
    unsigned int sum = 0, square = 0;
    for (unsigned int i = 1; i <= number; i++)
    {
        square = i * i;
        sum += square;
    }
    return sum;
}
unsigned int square_of_sum(unsigned int number)
{
    unsigned int sum = 0, square = 0;
    for (unsigned int i = 1; i <= number; i++)
    {
        sum += i;
    }
    square = sum * sum;
    return square;
}
unsigned int difference_of_squares(unsigned int number)
{
    return square_of_sum(number) - sum_of_squares(number);
}

int main()
{
    printf("%d\n\n", square_of_sum(5));
    printf("%d\n\n", sum_of_squares(5));
    printf("%d\n", difference_of_squares(5));

    return 0;
}