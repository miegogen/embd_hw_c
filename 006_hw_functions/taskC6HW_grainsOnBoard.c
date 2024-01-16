// How many grains are on the board
int grainsOnBoard (int num) {
    int sum = 1;

    for (int i = 1; i < num; i++) {
        sum *= 2;
        printf ("%d\n", sum);
    }

    return sum;
}

int main() {
    int num;
    scanf ("%d", &num);
    printf ("\n%d", grainsOnBoard(num));

    return 0;
}