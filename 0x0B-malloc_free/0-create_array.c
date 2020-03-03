#include "holberton.h"
#include <stdlib.h>
#include <limits.h>

/**
 * *create_array - Ceate array.
 * @size: tamaño string.
 * @c: carcter provided by main
 * Return: char.
 */

char *create_array(unsigned int size, char c)
{

	char *s;
	unsigned int i = 0;

	if (size == 0)
	{
		return ('\0');
	}

	s = malloc(sizeof(char) * size);
	if (s == 0)
	{
		s = '\0';
	}
	for (i = 0; i <= size; i++)
	{
		s[i] = c;
	}
	return (s);
}
