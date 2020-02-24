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

	x = 0;
	while (s[x] != c)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
		x++;
	}
	return (s + x - 1);
}
