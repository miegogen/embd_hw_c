/*
F8 Практ 2
Пропущенное число
Написать функцию и программу, демонстрирующую работу данной функции.
В последовательности записаны целые числа от M до N (M меньше N, M больше или равно 1) в произвольном порядке,
но одно из чисел пропущено (остальные встречаются ровно по одному разу). N не превосходит 1000.
Последовательность заканчивается числом 0. Определить пропущенное число.

Данные на входе:    Последовательность целых чисел от M до N. M, N не превосходит 1000.
Данные на выходе:   Одно целое число

Пример №1
Данные на входе:    2 3 1 4 7 6 9 8 10 0
Данные на выходе:   5

Пример №2
Данные на входе:    41 40 39 38 37 36 34 33 32 31 50 49 48 47 46 45 44 43 42 30 0
Данные на выходе:   35
*/


#include <stdio.h>

int missingNumber(int arr[], int size)
{
    int actualSum = 0;
    int expectedSum = 0;
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    expectedSum = (max + min) * (max - min + 1) / 2;

    for (int i = 0; i < size; i++)
    {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int inputArr(int arr[])
{
    int i = 0;
    int number;

    while (scanf("%d", &number) == 1)
    {
        arr[i++] = number;
    }

    return i;
}

int main(int argc, char const *argv[])
{
    enum {BUFFER_SIZE = 100};
    int workArr[BUFFER_SIZE] = {0};
    int sizeArr = inputArr(workArr);

    printf("%d", missingNumber(workArr, sizeArr));

    return 0;
}


