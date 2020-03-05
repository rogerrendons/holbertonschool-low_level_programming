#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - array of integers ordered
 * @min: min value
 * @max: max value
 *
 * Return: result
 */

int *array_range(int min, int max)
{


	int *arnum;
	int cont, large, aux;

	large = max - min + 1;
	if (min > max)
	{
		return (NULL);
	}
	arnum = malloc(sizeof(int) * large);
	if (arnum == NULL)
	{
		free(arnum);
		return (NULL);
	}
	aux = 0;
	for (cont = min; cont <= max; cont++)
	{
		arnum[aux] = cont;
		aux++;
	}
	return (arnum);
}
