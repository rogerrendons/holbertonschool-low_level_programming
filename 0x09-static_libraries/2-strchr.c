#include "holberton.h"

/**
 * _strchr - found a character and return rest.
 * @s: buffer copied of src.
 * @c: sourse data to copy.
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
