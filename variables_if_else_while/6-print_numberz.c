#include <stdio.h>

/**
 * main - Entry
 *
 * Result: 0 for succes
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');

	putchar('\n');

	return (0);
}
