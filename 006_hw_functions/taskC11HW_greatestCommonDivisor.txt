// greatest common divisor of two numbers
int greatestCommonDivisor (int a, int b) {
    int max = 2;

    for (int i = 2; ((i * 2 <= a) && (i * 2 <= b)); i++) {
        if ((a % i == 0) && (b % i == 0)) {
            if (max < i)
                max = i;
        }
    }

    return max;
}

int main() {
    int a, b;

    scanf ("%d%d", &a, &b);
    printf ("\n %d", greatestCommonDivisor(a, b));

    return 0;
}