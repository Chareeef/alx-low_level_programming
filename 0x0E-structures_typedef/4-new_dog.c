#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a new dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pdog;

	pdog = malloc(sizeof(dog_t));
	if (pdog == NULL)
		return (NULL);

	pdog->name = malloc((strlen(name) + 1) * sizeof(char));
	if (pdog->name == NULL)
	{
		free(pdog);
		return (NULL);
	}
	strcpy(pdog->name, name);

	pdog->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (pdog->owner == NULL)
	{
		free(pdog->name);
		free(pdog);
		return (NULL);
	}
	strcpy(pdog->owner, owner);

	pdog->age = age;

	return (pdog);
}
