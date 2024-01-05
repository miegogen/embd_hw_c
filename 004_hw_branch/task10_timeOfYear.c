#include <stdio.h>

int main(int argc, char **argv)
{
    timeOfYear();

    return 0;
}

void timeOfYear(void)
{
    int a;
    printf ("Enter number of month\n");
    scanf ("%d", &a);
    switch (a)
    {
        case 3 ... 5:
            printf ("spring!\n");
            break;
        case 6 ... 8:
            printf ("summer!\n");
            break;
        case 9 ... 11:
            printf ("autumn!\n");
            break;
        case 1:
        case 2:
        case 12:
            printf ("winter!\n");
            break;
        default:
            printf ("Do you know how many month there are in a year?\n");
    }
}