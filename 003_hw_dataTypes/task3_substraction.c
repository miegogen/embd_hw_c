#include <stdio.h>

int main(int argc, char **argv)
{
    substraction();

    return 0;
}



void substraction(void)
{
    int a, b;

    printf("Enter 2 integer numbers by spaces\n");
    scanf("%d%d", &a, &b);
    printf("%d - %d = %d\n", a, b, a - b);

    return 0;
}
