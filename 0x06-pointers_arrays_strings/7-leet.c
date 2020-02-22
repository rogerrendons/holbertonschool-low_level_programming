#include "holberton.h"

/**
 * leet - Write a function that capitalizes all words of a string.
 * @s: Characters by main.c
 * Return: Always 0.
 */

char *leet(char *s)
{
	int r, l = 0;
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (r = 0; s[r] != '\0'; r++)
	{
		for (l = 0; let[l] != '\0'; l++)
		{
			if (let[l] == s[r])
			{
				s[r] = num[l];
			}
		}
	}
	return (s);
}
