#include <stdio.h>

int main(int argc, char **argv)
{
    moreOfThree();

    return 0;
}

void moreOfThree(void)
{
    int a, b, c;

    printf ("Enter 3 integer numbers by spaces\n");
    scanf ("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf ("%d", a);
    }
    else if (b > c)
    {
        printf ("%d", b);
    }
    else printf ("%d", c);

    return 0;
}