#include <stdio.h>


void shiftByFour(int *arr, int arrSize) {

    for (int j = 0; j < 4; j++) {
        int temp = arr[arrSize - 1];
        for (int i = arrSize - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
}

int main() {
    enum {arrSize = 12};
    int arr[arrSize];

    for (int i = 0; i < 12; i++) {
        scanf("%d", &arr[i]);
    }

    shiftByFour(arr, arrSize);

    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
