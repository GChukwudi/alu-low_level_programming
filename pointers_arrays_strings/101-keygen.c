#include "main.h"

/**
 * main - keygen for crackme5
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int i, sum, len;
	char *str;

	str = av[1];
	len = 0;
	sum = 0;

	if (ac != 2)
		return (1);
	while (str[len])
		len++;
	for (i = 0; i < len; i++)
		sum += str[i];
	printf("%d\n", sum);
	return (0);
}
