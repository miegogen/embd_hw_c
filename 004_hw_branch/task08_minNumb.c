#include <stdio.h>

int main(int argc, char **argv)
{
    minNumb();

    return 0;
}

void minNumb(void)
{
    int min, x[5];

    printf ("Enter 5 integer numbers by space\n");
    for (int i = 0; i < 5; i++)
    {
        scanf ("%d", &x[i]);
    }

    min = x[0];

    for (int i = 1; i < 5; i++)
    {
        min = min > x[i] ? x[i] : min;
    }
	
    printf ("%d\n", min);
}