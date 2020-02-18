#include "holberton.h"
/**
 * _strcpy - function that prints the reverse Holberton.
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
	return (dest);
}
