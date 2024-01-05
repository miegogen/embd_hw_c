#include <stdio.h>

int main(int argc, char **argv)
{
    moreOfTwo();

    return 0;
}

void moreOfTwo(void)
{
    int a, b;

    printf ("Enter 2 integer numbers by spaces\n");
    scanf ("%d%d", &a, &b);

    printf ("%d\n", a > b ? a : b);

    return 0;
}




