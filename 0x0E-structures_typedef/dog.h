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
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
