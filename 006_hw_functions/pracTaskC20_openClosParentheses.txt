/* Correct opening and closing of parentheses. */

#include <stdio.h>

int openClosParentheses (char c) {
    int bracket;

    if (c == '(')
        bracket = 1;

    if (c == ')')
        bracket = -1;

    return bracket;
}

int main () {
    int count = 0;
    char input;

    while (1) {
        scanf ("%c", &input);
        if (input == '.') {
            if (count != 0) {
                printf ("NO\n");
            } else {
                printf ("YES\n");
            }

            break;
        }

        count += openClosParentheses(input);
        if (count < 0) {
            printf ("NO\n");
            break;
        }
    }

    return 0;
}