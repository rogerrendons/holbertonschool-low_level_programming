#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - create memory with malloc ffffffffffffffffffffffffffffffff
 * @b: integer to create memmory with malloc
 * Return: result.
 */

void *malloc_checked(unsigned int b)
{
	int *mymalloc;

	mymalloc = malloc(b);

	if (mymalloc == NULL)
	{
		free(mymalloc);
		exit(98);
	}
	return (mymalloc);
}
