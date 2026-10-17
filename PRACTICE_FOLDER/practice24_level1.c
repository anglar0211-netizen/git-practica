#include <stdio.h>

int steps(int start)
{
    int step = 0;
    while (start != 1 && start > 0)
    {
        if (start % 2 == 0)
        {
            start = start / 2;
        }
        else
        {
            start = (start * 3) + 1;
        }
        step++;

        if (start == 0)
        {
            return 1;
        }
    }
    return step;
}
int main()
{
    printf("%d", steps(0));
    return 0;
}