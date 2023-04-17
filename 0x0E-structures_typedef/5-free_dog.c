#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - free a dog structure
 * @d: pointer to a  dog structure
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
