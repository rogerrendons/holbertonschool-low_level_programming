#include "holberton.h"
#include <stdlib.h>

/**
 * *create_array - Ceate array.
 * @size: tamaño string.
 * @c: carcter provided by main
 * Return: char.
 */

char *_strdup(char *str)
{

	char *s;
	char *p;
	unsigned int i, m = 0;

        if (s == NULL)
        {
		return (NULL);
	}
	else
	{
		while (s[i] != '\0')
		{
			i++;
		}
	}
	p = malloc(sizeof(char) * i);
	for (m = 0; s[m] != '\0'; m++)
	{
		p[m] = s[m];
	}
	return (s);





}
