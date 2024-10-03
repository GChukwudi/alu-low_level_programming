#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
    int len = 0;
    char *beg, *end, temp;

    while (*s)
    {
        len++;
        s++;
    }

    beg = s - len;
    end = s - 1;

    while (beg < end)
    {
        temp = *beg;
        *beg = *end;
        *end = temp;

        beg++;
        end--;
    }
}
