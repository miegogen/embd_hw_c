#include <stdio.h>

#define SIZE 5

float averageOf(int *arr, int len) {
    float result = 0.0;

    for (int i = 0; i < len; i++) {
        result += arr[i];
    }

    return result / len;
}

void inputArr(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
}

int main(void) {
    int arr[SIZE];

    inputArr(arr, SIZE);
    printf ("\n%.3f", averageOf(arr, SIZE));

    return 0;
}
