#include <stdio.h>

void allOdds () {
    int n;

    scanf("%d", &n);

    if (n != 0) {
        if (n % 2 != 0) {
            printf("%d ", n);
        }

        allOdds();
    }
}

int main (void) {
    allOdds();

    return 0;
}
