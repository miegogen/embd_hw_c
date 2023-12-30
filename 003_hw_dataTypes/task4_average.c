#include <stdio.h>

int main(int argc, char **argv)
{
    average();

    return 0;
}

void average(void)
{
    float a, b, c;

    printf("Enter 3 integer numbers by spaces\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("%.2f\n", (a + b + c) / 3);

    return 0;
}