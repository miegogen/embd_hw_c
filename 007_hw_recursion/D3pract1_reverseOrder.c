#include <stdio.h>

void reverseOrder(int n) {
    if (n > 0) {
        printf("%d ", n % 10);
        reverseOrder(n / 10);
    }
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    reverseOrder(n);

    return 0;
}
