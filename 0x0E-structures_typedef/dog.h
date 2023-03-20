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
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
