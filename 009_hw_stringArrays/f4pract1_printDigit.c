/*
F4 Практ 1
Цифры в строке
Написать функцию и программу, демонстрирующую работу данной функции.
Вывести в порядке возрастания цифры, входящие в строку. Цифра - количество.
Функция должно строго соответствовать прототипу:

void print_digit(char s[])

Данные на входе:    Строка из английских букв, пробелов, знаков препинания и цифр
Данные на выходе:   Функция должна принимать на вход строку и выводить на печать по формату: Цифра пробел количество.

Пример
Данные на входе:    Hello123 world77.
Данные на выходе:   1 1 2 1 3 1 7 2
*/

#include <stdio.h>
#include <string.h>

void print_digit(char s[])
{
    int count[10] = {0};                    // массив для подсчета встреченных цифр

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            count[s[i] - '0']++;            // увеличиваем счетчик для соответствующей цифры
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            printf("%d %d ", i, count[i]);
        }
    }
}

int main(void)
{
    char str[100];

    printf("Enter a string (exit for exit): ");
    scanf("%99[^\n]%*c", str);
    print_digit(str);

    return 0;
}

                                                // Реализация с бесконечным вводом и выходом по вводу "exit"
//~ int main(void)
//~ {
    //~ char str[100];

    //~ while (1)
    //~ {
        //~ printf("Enter a string (exit for exit): ");
        //~ fgets(str, sizeof(str), stdin);

        //~ if (strcmp(str, "exit\n") == 0)
        //~ {
            //~ break;
        //~ }

        //~ printf("Input data: %s\n", str);
        //~ printf("Output data:\n");
        //~ print_digit(str);
        //~ printf("\n");
    //~ }

//~ return 0;
//~ }
