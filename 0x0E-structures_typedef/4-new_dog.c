#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: pointer to dog_t struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	unsigned int i, n, o;

	if (name == NULL || owner == NULL)
		return (NULL);
	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);
	for (n = 0; name[n]; n++)
		;
	n++;

	newdog->name = malloc(n * sizeof(char));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		newdog->name[i] = name[i];

	newdog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;

	newdog->owner = malloc(o * sizeof(char));

	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		newdog->owner[i] = owner[i];
	return (newdog);
}
