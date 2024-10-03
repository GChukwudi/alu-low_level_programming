#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0.
 */

int main(void)
{
    int pass_w[100];
    int i, sum, n;

    sum = 0;
    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        pass_w[i] = rand() % 78 + 48;
        sum += pass_w[i];
        putchar(pass_w[i]);
        if ((2772 - sum) - pass_w[i] >= 48 && (2772 - sum) - pass_w[i] <= 78)
        {
            n = (2772 - sum) - pass_w[i];
            sum += n;
            pass_w[i] = n;
            putchar(n);
        }
    }
}
