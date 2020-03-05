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

	unsigned int *mycaloc;
	unsigned int fill = 0;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	mycaloc = malloc(sizeof(size) * nmemb);
	if (mycaloc == NULL)
	{
		free(mycaloc);
		return (NULL);
	}
	for (fill = 0; fill < nmemb; fill++)
	{
		mycaloc[fill] = 0;
	}
	return (mycaloc);
}
