// The sum of digits in the number is equal to the product
int isHappyNumber (int n) {
    int sum = 0;
    int prod = 1;

    for (; n > 0 ; n /= 10) {
        sum += n % 10;
        prod *= n % 10;
    }

    return (sum == prod);
}

int main () {
    int n;

    scanf ("%d", &n);
    isHappyNumber(n) ? printf("YES") : printf("NO");

    return 0;
}