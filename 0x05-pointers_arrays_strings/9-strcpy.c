#include "holberton.h"
/**
 * print_array - function that prints the reverse Holberton.
 * @src: string initial.
 * @dest: string copy.
 * Return: 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
