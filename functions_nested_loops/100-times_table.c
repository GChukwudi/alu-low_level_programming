#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: the times table to print
 */

void print_times_table(int n)
{
	int i, j, res;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			res = i * j;
			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (res / 100 == 0)
					_putchar(' ');
				else
					_putchar((res / 100) + '0');
				if (res / 10 == 0)
					_putchar(' ');
				else
					_putchar(((res / 10) % 10) + '0');
				_putchar((res % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
