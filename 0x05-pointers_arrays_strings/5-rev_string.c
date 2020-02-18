#include "holberton.h"
/**
 * rev_string - function that prints the reverse Holberton.
 * @s: string initial.
 * Return: 0.
 */
char *rev_string(char *s)
{
	int i, j;
	char *dest;

	i = 0;
	j = 10;
	while (s[i] != '\0')
	{
		dest[j] = s[i];
		i++;
		j--;
	}
	return (dest);
}
