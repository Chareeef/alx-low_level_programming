#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - initialize a dog structure
 * @d: pointer to a  dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen((name) + 1) * sizeof(char));
	if (d->name == NULL)
		exit(EXIT_FAILURE);
	strcpy(d->name, name);

	d->owner = malloc(strlen((owner) + 1) * sizeof(char));
	if (d->owner == NULL)
		exit(EXIT_FAILURE);
	strcpy(d->owner, owner);

	d->age = age;
}
