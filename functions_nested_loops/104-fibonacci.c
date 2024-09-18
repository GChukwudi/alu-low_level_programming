#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * 
 * Return: 0
 */

int main(void)
{
    int count;
    unsigned long f1 = 1, f2 = 2;
    unsigned long f1_high = 0, f2_high = 0;
    unsigned long high_part, low_part;
    unsigned long threshold = 1000000000;


    printf("%lu, %lu, ", f1, f2);

    for (count = 3; count <= 98; count++)
    {
        if (f1_high || f2_high)
        {
            high_part = f1_high + f2_high + ((f1 + f2) / threshold);
            low_part = (f1 + f2) % threshold;

            printf("%lu%09lu", high_part, low_part);
            f1_high = f2_high;
            f2_high = high_part;
        }
        else
        {
            low_part = f1 + f2;
            printf(", %lu", low_part);
        }

        f1 = f2;
        f2 = low_part;
    }

    printf("\n");

    return (0);
}
