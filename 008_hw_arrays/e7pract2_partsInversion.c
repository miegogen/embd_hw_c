#include <stdio.h>


/**********************************************************************/
/* тупая версия для двух половинок                                    */
/**********************************************************************/


#define SIZE 10

void halvesInversion(int *arr, int len) {
    for (int i = 0; i < 2; i++) {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;

        temp = arr[i + 5];
        arr[i + 5] = arr[9 - i];
        arr[9 - i] = temp;
    }
}

int main(void) {
    int array[SIZE];

    for (int i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);

    halvesInversion(array, SIZE);

    for (int i = 0; i < SIZE; i++)
        printf("\%d ", arr[i]);

    return 0;
}


/**********************************************************************/
/* чуть более умная версия для двух половин                           */
/**********************************************************************/


void reverseHalf(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int array[10];

    printf("Enter 10 integer numbers separated by spaces: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    reverseHalf(array, 0, 4);
    reverseHalf(array, 5, 9);


    printf("\nModified array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}


/**********************************************************************/
/* уже достаточно хорошая версия для трёх частей                      */
/**********************************************************************/


void reverseThirds(int arr[], int size) {

    for (int i = 0; i < size / 3; i++) {
        int start = i * (size / 3);
        int end = start + (size / 3) - 1;

        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}

int main() {
    int array[12];

    printf("Enter 12 integer numbers separated by spaces: ");
    for (int i = 0; i < 12; i++) {
        scanf("%d", &array[i]);
    }

    reverseThirds(array, 12);

    printf("\nModified array: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}


/**********************************************************************/
/* отличная версия для всех размерностей и чётных им частей           */
/**********************************************************************/


void reverseParts(int arr[], int size, int parts) {
    // Проверка на корректность входных данных
    if (size % parts != 0) {
        printf("Incorrect parametrs: array size must be a multiple of the number of parts.\n");
        return;
    }

    // Инверсия каждой части массива
    for (int i = 0; i < parts; i++) {
        int start = i * (size / parts);
        int end = start + (size / parts) - 1;

        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}

int main() {
    int size, parts;

    printf("Enter array dimension: ");
    scanf("%d", &size);

    printf("Enter the number of inverted parts: ");
    scanf("%d", &parts);

    int array[size];

    printf("Enter %d integers separated by spaces: ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    reverseParts(array, size, parts);

    printf("Modified array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    return 0;
}



