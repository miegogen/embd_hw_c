#include <stdio.h>

int main(int argc, char **argv)
{
    aboveLessEqual();

    return 0;
}

void aboveLessEqual(void)
{
    int a, b;

    printf ("Enter 2 integer numbers by space\n");
    scanf ("%d%d", &a, &b);

    if (a > b)
    {
        printf ("Above\n");
    }
    else if (a < b)
    {
        printf ("Less\n");
    }
    else
    {
        printf ("Equal\n");
    }
}