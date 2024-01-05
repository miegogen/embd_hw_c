#include <stdio.h>

int main(int argc, char **argv)
{
    highestFigure();

    return 0;
}

void highestFigure(void)
{
    int a, b, c, d;

    printf ("Enter a three-digit number\n");
    scanf ("%d", &a);

    b = a / 100;
    c = a % 100 / 10;
    d = a % 10;

    if (b > c && b > d)
    {
        printf ("%d", b);
    }
    else if (c > d)
    {
        printf ("%d", c);
    }
    else printf ("%d", d);

    return 0;
}