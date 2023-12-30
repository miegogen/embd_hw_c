#include <stdio.h>

int main(int argc, char **argv)
{
    addition();

    return 0;
}

void addition(void)
{
    int a, b, c;

    printf("Enter 3 integer numbers by spaces\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d + %d + %d = %d\n", a, b, c, a + b + c);

    return 0;
}
