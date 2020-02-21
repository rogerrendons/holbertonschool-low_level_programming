#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < 91)
		{
			s[i] = s[i];
		}
		else
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
