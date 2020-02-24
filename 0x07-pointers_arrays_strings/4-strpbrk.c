#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - get string to init.
 * @s: string 1.
 * @accept: for scan in the s.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int acc = 0;

	while (*s)
	{
		for (acc = 0; accept[acc]; acc++)
		{

			if (*s == accept[acc])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
