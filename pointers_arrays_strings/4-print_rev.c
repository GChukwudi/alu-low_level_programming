#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
    int len = 0;

    while (*s)
    {
        len++;
        s++;
    }

    while (len > 0)
    {
        s--;
        _putchar(*s);
        len--;
    }
    _putchar('\n');
}