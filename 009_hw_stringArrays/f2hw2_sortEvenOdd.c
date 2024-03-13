/*
F2 ДЗ 2
Четные в начало
Написать функцию и программу, демонстрирующую работу данной функции,
которая ставит в начало массива все четные элементы, а в конец – все нечетные.
Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:
void sort_even_odd(int n, int a[])

Данные на входе:    Функция принимает на вход целые числа
Данные на выходе:   Отсортированный исходный массив

Пример №1
Данные на входе:    20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
Данные на выходе:   20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3 1

Пример №2
Данные на входе:    1 0 1 0 1
Данные на выходе:   0 0 1 1 1
*/

#include <stdio.h>

void swapArr( int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void sort_even_odd(int n, int a[])
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        if (a[left] % 2 != 0 && a[right] % 2 == 0)
        {
            swapArr(&a[left], &a[right]);
            left++;
            right--;
        }
        else
        {
            if (a[left] % 2 == 0)
            {
                left++;
            }
            if (a[right] % 2 != 0)
            {
                right--;
            }
        }
    }

    // Сортировка четных чисел по убыванию, водораздел беру по переменной left
    for (int i = 0; i < left - 1; i++)
    {
        for (int j = i + 1; j < left; j++)
        {
            if (a[i] < a[j])
            {
                swapArr(&a[i], &a[j]);
            }
        }
    }

    // Сортировка нечетных чисел по убыванию
    for (int i = left; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                swapArr(&a[i], &a[j]);
            }
        }
    }
}


void inputArr(int a[], int n)
{
    printf("Enter the elements of Array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

}

void printArr(int a[], int n)
{
    printf("Sorted array\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter arr size\n");
    scanf("%d", &n);

    int arr[20];

    inputArr(arr, n);

    sort_even_odd(n, arr);

    printArr(arr, n);

    return 0;
}
