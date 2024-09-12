#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 for success
 */

int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);

	putchar('\n');

	return (0);
}
