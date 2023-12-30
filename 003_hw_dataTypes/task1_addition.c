#include <stdio.h>

int main(int argc, char **argv)
{
    addition();
    addMult();
    substraction();
    average();
    someNumb();

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

void addMult(void)
{
    int a, b, c;

    printf("Enter 3 integer numbers by spaces\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("%d + %d + %d = %d\n", a, b, c, a + b + c);
    printf("%d * %d * %d = %d\n", a, b, c, a * b * c);

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

void average(void)
{
    float a, b, c;

    printf("Enter 3 integer numbers by spaces\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("%.2f\n", (a + b + c) / 3);

    return 0;
}

void someNumb(void)
{
    int a;

    printf("Enter a three-digit number\n");
    scanf("%d", &a);
     printf("%d", (a / 100)*(a % 100 / 10)*(a % 10));

    return 0;
}


