#include <stdio.h>

void sortByLastNum(int *arr, int arrSize) {

    for (int i = 0; i < arrSize; i++) {
        int temp = arr[i];
        int repIndex;

        for (int j = i + 1; j < arrSize; j++) {
            if ((temp % 10) > (arr[j] % 10)) {
                temp = (arr[j] % 10);
                repIndex = j;
            }
        }
        if (arr[i] != temp) {
            temp = arr[i];
            arr[i] = arr[repIndex];
            arr[repIndex] = temp;
        }
    }
}

int main() {
    enum {arrSize = 10};
    int arr[arrSize];

    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    sortByLastNum(arr, arrSize);

    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);

    return 0;
}



/**********************************************************************/
/* Решение пузырьковой сортировкой                                    */
/**********************************************************************/


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int compareLastDigit(int num1, int num2) {
    return (num1 % 10) - (num2 % 10);
}

int main() {
    int arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (compareLastDigit(arr[j], arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
