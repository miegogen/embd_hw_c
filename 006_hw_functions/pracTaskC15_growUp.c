/* Numbers ascending */

#include <stdio.h>

int growUp (int n) {
    int prev = n;

    for (; n > 0; n /= 10) {
        if (n % 10 > prev)
            return 0;

        prev = n % 10;
    }

    return 1;
}

int main () {
    int n;

    scanf ("%d", &n);

    growUp(n) ? printf("YES") : printf("NO");

    return 0;
}