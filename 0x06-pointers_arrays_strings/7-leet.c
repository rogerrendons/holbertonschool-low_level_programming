#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @s: Characters by main.c
 * Return: Always 0.
 */

char *leet(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (((s[i] == 'a') || (s[i] == 'A')) &&  ((s[i] == 'e') || (s[i] == 'E')) &&  ((s[i] == 'o') || (s[i] == 'O')) && ((s[i] == 't') || (s[i] == 'T')) &&  ((s[i] == 'l') || (s[i] == 'L')))
		{
			
		}
		i++;
	}
	return (s);
}
