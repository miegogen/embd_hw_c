#include <stdio.h>

int main(int argc, char **argv)
{
    maxMinSum();

    return 0;
}

void maxMinSum(void)
{
    int max, min, x[5];

    printf ("Enter 5 integer numbers by spaces\n");
    for (int i = 0; i < 5; i++)
    {
        scanf ("%d", &x[i]);
    }

    max = min = x[0];

    for (int i = 1; i < 5; i++)
    {
        max = max > x[i] ? max : x[i];
        min = min < x[i] ? min : x[i];
    }

    printf ("%d", max + min);
}