#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to the string
 *
 * Return: len of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
