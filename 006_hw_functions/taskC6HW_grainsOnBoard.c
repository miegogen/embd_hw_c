#include <stdio.h>

// How many grains are on the board
unsigned long long grainsOnBoard (int num) {
    unsigned long long sum = 1;

    for (int i = 1; i < num; i++) {
        sum *= 2;
        printf ("%llu\n", sum);
    }

    return sum;
}

int main() {
    int num;
    scanf ("%d", &num);
    printf ("\n%llu", grainsOnBoard(num));

    return 0;
}
