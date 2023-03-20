#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - poppy
 * @d: parameter one
 * @name: poppy
 * @age: years
 * @owner: owner of poppy
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
