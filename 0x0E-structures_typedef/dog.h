#ifndef HOLBERTON
#define HOLBERTON
#include "dog.h"

/**
 * struct dog - Ok
 * @name: Name dog
 * @age: Age dog
 * @owner: Owner dog
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
