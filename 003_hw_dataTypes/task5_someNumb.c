#include <stdio.h>

int main(int argc, char **argv)
{
    someNumb();

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


