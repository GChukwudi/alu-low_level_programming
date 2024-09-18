#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
    long int i, j, k, next;

    i = 1;
    j = 2;

    printf("%ld, %ld, ", i, j);

    for (k = 3; k <= 50; k++)
    {
        next = i + j;
        printf("%ld", next);

        if (k == 50)
            printf("\n");
        else
            printf(", ");

        i = j;
        j = next;
    }

    return (0);
}