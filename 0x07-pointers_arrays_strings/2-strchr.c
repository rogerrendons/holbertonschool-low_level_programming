#include "holberton.h"

/**
 * _strchr - found a character and return rest.
 * @s: buffer copied of src.
 * @c: sourse data to copy.
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return (0);
}
