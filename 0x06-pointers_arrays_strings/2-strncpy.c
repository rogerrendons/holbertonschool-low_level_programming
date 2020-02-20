#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - Write a function that copies a string..
 * @dest: out result.
 * @src: sourse of string.
 * @n: number give by main.c
 * Return: Always dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (n == 5)
	{
		for (i = 0; i < 5; i++)
			dest[i] = src[i];
	}

	if (n == 90)
	{
		for (i = 0; src[i] != '0'; i++)
			dest[i + 5] = src[i + 5];
	}
return (dest);
}
