#include <stdio.h>

int main(int argc, char **argv)
{
    isThisTriangle();

    return 0;
}

void isThisTriangle(void)
{
    int a, b, c;
	
    printf ("Enter 3 integer numbers by spaces\n");
    scanf ("%d%d%d", &a, &b, &c);
	
    if ((a + b) > c &&
        (a + c) > b &&
        (b + c) > a)
    {
        printf ("YES\n");
    }
    else
    {
        printf ("NO\n");
    }
}
