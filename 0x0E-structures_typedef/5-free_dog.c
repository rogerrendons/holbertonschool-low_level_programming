#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog
 * @d: pointer of a dog
 *
 * return dog_t
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
