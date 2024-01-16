#include <stdio.h>

// sum of all numbers from 1 to N
int sumAllNumbers (int num) {
    int sum = 0;

    for (int i = 1; i <= num; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int num;
    scanf ("%d", &num);
    printf ("%d", sumAllNumbers(num));

    return 0;
}