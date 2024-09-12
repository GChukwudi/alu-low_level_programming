#include <stdio.h>

/**
 * main - prints all single digit numbers of the base 10 starting from 0
 *
 * Return: 0 for succes
 */

int main(void)
{
	int numb;
	for (numb = 0; numb < 10; numb++)
		printf("%d", numb);
	printf("\n");
	return (0);
}
