#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, k;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;

	new_dog->name = malloc(i + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(j + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		new_dog->name[k] = name[k];
	new_dog->name[k] = '\0';

	new_dog->age = age;

	for (k = 0; k < j; k++)
		new_dog->owner[k] = owner[k];
	new_dog->owner[k] = '\0';

	return (new_dog);
}
