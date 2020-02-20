#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @s: Characters by main.c
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < 91)
		{
			s[i] = s[i];
		}
		else
		{
			if (((s[i-1] = ' ') || (s[i-1] = '\n') || (s[i-1] = '\t')) && (s[i] > 91))
			{
				s[i] = s[i]-32;
			}
		}
		printf("I es = %d y s[i] es: %c\n",i,s[i]);
		i++;
	}
	return (s);
}
