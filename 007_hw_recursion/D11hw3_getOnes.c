#include <stdio.h>

// умная версия, без глобальной переменной, которую я нашёл где-то

//~ int getOnes(n) {
    //~ if (n == 0)
        //~ return 0;

    //~ return (n % 2) + getOnes(n / 2);
//~ }

//~ int main(void) {
    //~ int n;

    //~ scanf("%d", &n);

    //~ printf ("%d ones", getOnes(n));

    //~ return 0;
//~ }



// моя тупая версия с глобальной переменной

int  count = 0;

void getOnes(int n) {
    if (n % 2 == 1)
        count++;

    if (n > 1)
        getOnes(n / 2);
}

int main(void) {
    int n;

    scanf("%d", &n);
    getOnes(n);
    printf ("\n%d", count);

    return 0;
}
