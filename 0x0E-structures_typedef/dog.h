#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - A dog structure
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 *
 * Description: provide dog's name, owner and age.
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;

#endif
