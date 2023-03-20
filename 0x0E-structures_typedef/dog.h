#ifndef DOG_H
#define DOG_H


/**
 * struct dog - poppy
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description - longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
