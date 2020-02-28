#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: out result.
 * @src: sourse of string.
 * @n: number give by main.c
 * Return: Always dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, x = 0;

	i = 0;
	x = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	while (x < n)
	{
		dest[i] = src[x];
		i++;
		x++;
		if (src[x] == '\0')
		{
			break;
		}
	}
	i++;
	dest[i] = '\0';
return (dest);
}
