#include <stdio.h>

void selectToOutput(int *input, int *output, int arrSize, int *count) {
    for (int i = 0; i < arrSize; i++) {
        if ((input[i] / 10 % 10) == 0) {
            output[*count] = input[i];
            (*count)++;
        }
    }
}

int main() {
    enum {arrSize = 10};
    int input[arrSize];
    int output[arrSize];
    int count = 0;


    for (int i = 0; i < 10; i++)
        scanf("%d", &input[i]);

    selectToOutput(input, output, arrSize, &count);

    for (int i = 0; i < count; i++)
        printf("%d ", output[i]);

    return 0;
}
