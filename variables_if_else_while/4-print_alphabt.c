#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, excluding 'q' and 'e'.
 *
 * Return: 0 for succes
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');

	return (0);
}
