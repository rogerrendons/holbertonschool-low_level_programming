#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Short description
 * @d: pointer by main
 * @name: Name dog
 * @age: Age dog
 * @owner: Owner dog
 *
 * Return None
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
