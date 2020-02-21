#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @s: Characters by main.c
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int i, x = 0;
	char sep[] = {' ', '\n', '\t', '.'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x <= 4; x++)
		{
			if (sep[x] == s[i])
			{
				if (s[i+1] >= 97)
				{
					s[i+1] = s[i+1] - 32;
/**					printf("i=%d, x=%d \n", i, x); */
				}
			}

		}
	}
	return (s);
}
