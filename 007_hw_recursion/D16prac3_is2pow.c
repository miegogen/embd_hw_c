#include <stdio.h>

int is2pow(int a) {
    if (a == 1) {
        return 1;
    } else if (a % 2 != 0 || a == 0) {
        return 0;
    } else {
        return is2pow(a / 2);
    }
}

int main(void) {
    int a;

    scanf("%d", &a);
    is2pow(a) ? printf ("YES") : printf ("NO");
}
