#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 9; j++)
		{
			n = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (n < 10)
				{
					_putchar(' ');
				}
			}
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
