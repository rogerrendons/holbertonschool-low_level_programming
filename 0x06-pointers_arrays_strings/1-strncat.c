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
	int i, x, j = 0;

	if (n == 1)
	{
		for (i = 0; dest[i] != '\0'; i++)
		{
		}
		dest[i] = src[n - 1];
	}
	else
	{
		for (j = 0; dest[j] != '\0'; j++)
		{
		}
		for (x = 0; src[x] != '\0'; x++)
		{
			dest[j] = src[x];
			j++;
		}
	}
return (dest);
}
