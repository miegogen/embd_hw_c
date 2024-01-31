#include <stdio.h>

void printNums (int a, int b) {
    if (a > b) {
        printf ("%d ", a);
        printNums(a - 1, b);
    } else if (a < b) {
        printf ("%d ", a);
        printNums(a + 1, b);
    } else {
        printf ("%d", a);
    }
}

int main (void) {
    int a, b;

    scanf("%d%d", &a, &b);
    printNums(a, b);

    return 0;
}
