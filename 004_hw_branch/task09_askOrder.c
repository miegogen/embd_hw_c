#include <stdio.h>

int main(int argc, char **argv)
{
    askOrder();

    return 0;
}

void askOrder(void)
{
    int a, b, c;
	
    printf ("Enter 3 integer numbers by spaces\n");
    scanf ("%d%d%d", &a, &b, &c);
	
    if (a < b && b < c)
    {
        printf ("YES\n");
    }
    else
    {
        printf ("NO\n");
    }
}
