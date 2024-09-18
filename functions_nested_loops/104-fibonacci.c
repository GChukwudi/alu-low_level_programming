#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * 
 * Return: 0
 */

int main(void)
{
    int count;
    unsigned long int a = 1, b = 2, c;

    printf("%lu, %lu", a, b);

    for (count = 3; count <= 98; count++)
    {
        c = a + b;
        if (count == 98)
            printf(", %lu\n", c);
        else
            printf(", %lu", c);

        a = b;
        b = c;
    }
    return (0);
}
