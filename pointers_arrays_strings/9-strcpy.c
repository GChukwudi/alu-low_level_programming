#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 *		including the terminating null byte (\0),
 *		to the buffer pointed to by dest
 * @dest: pointer to the destination buffer
 * @src: pointer to the source string
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
