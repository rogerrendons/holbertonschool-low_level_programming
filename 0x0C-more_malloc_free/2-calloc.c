#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - Assing memory with calloc
 * @nmemb: Number of memory.
 * @size: type variable.
 *
 * Return: result
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mycaloc;
	unsigned int fill;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}
	mycaloc = malloc(size * nmemb);
	if (mycaloc == NULL)
	{
		free(mycaloc);
		return (NULL);
	}
	for (fill = 0; fill < nmemb * size; fill++)
	{
		mycaloc[fill] = 0;
	}
	return (mycaloc);
}
