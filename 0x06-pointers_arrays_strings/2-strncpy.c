#include "holberton.h"
/**
 * _strncpy - Write a function that copies a string..
 * @dest: out result.
 * @src: sourse of string.
 * @n: number give by main.c
 * Return: Always dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int w;

	for (w = 0; w < n; w++)
	{
		dest[w] = src[w];
		if (dest[w] == '*')
		{
			dest[w] = 0;
		}
	}
	return (dest);
}
