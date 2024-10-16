#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
    char *duplicate;
    unsigned int i, len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len])
        len++;

    duplicate = malloc((len + 1) * sizeof(char));

    if (duplicate == NULL)
        return (NULL);

    for (i = 0; str[i]; i++)
        duplicate[i] = str[i];

    duplicate[len] = '\0';

    return (duplicate);
}
