#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
    int len, half;

    for (len = 0; str[len] != '\0'; len++)
    {
        ;
    }

    if (len % 2 == 0)
    {
        half = len / 2;
    }
    else
    {
        half = (len + 1) / 2;
    }

    for (; half < len; half++)
    {
        _putchar(str[half]);
    }

    _putchar('\n');
}
