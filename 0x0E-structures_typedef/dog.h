#ifndef HOLBERTON
#define HOLBERTON
#include "dog.h"

/**
 * struct dog - Ok
 * struct dog_t - Ok
 * @name: Name dog
 * @age: Age dog
 * @owner: Owner dog
 *
 * Description: Longer description
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
