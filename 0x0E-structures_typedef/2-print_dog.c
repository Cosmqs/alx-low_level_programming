#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - poppy
 * @d: parameter
 *
 * Return: nothing
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "Name: (nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "Owner: (nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}


