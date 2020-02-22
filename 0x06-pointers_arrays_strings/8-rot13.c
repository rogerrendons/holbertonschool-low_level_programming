#include "holberton.h"
#include <stdio.h>

/**
 * rot13 - Write a function that encodes a string using rot13.
 * @s: Characters by main.c
 * Return: Always 0.
 */

char *rot13(char *s)
{
	int r, l = 0;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (r = 0; s[r] != '\0'; r++)
	{
		for (l = 0; l < 52; l++)
		{
			if (s[r] == let[l])
			{
				s[r] = num[l];
				l = 52;
			}
		}
	}
	return (s);
}
