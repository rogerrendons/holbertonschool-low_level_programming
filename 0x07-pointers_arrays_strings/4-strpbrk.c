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
	int rec, comp;

	rec = 0;
	while (s[rec] != '\0')
	{
		comp = 0;
		while (accept[comp] != '\0')
		{
			if (s[rec] == accept[comp])
			{
				printf("%s \n", s);
				return (s);
			}
			comp++;
		}
		rec++;
	}
	return ('\0');
}
