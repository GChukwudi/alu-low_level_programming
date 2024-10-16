#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j, len = 0, total = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		total += len;
		len = 0;
	}

	concat = malloc((total + ac + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	total = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			concat[total] = av[i][j];
			j++;
			total++;
		}
		concat[total] = '\n';
		total++;
	}
	concat[total] = '\0';

	return (concat);
}
