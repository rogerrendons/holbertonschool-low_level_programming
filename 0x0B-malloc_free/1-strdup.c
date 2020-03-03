#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - Ceate array.
 * @str: string.
 * Return: char.
 */

char *_strdup(char *str)
{

	char *copy;
	unsigned int i, m = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
	}
	copy = malloc(sizeof(char) * i);
	if (copy == NULL)
	{
		return (NULL);
	}
	for (m = 0; str[m] != '\0'; m++)
	{
		copy[m] = str[m];
	}
	return (copy);
}
