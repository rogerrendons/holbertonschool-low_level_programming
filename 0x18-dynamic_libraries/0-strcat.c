#include "holberton.h"
/**
 * _strcat - Write a function that concatenates two strings.
 * @dest: out result.
 * @src: sourse of string.
 * Return: Always dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, x = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (x = 0; src[x] != '\0'; x++)
	{
		dest[i] = src[x];
		i++;
	}
return (dest);
}
