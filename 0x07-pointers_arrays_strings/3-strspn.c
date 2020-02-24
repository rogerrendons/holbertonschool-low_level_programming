#include "holberton.h"
/**
 * _strspn - get leng.
 * @s: string 1.
 * @accept: for scan in the s.
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)

{
	int rec, comp, sum;

	sum = 0;
	rec = 0;
	while (s[rec] != ' ')
	{
		comp = 0;
		while (accept[comp] != '\0')
		{
			if (s[rec] == accept[comp])
			{
				sum++;
			}
			comp++;
		}
		rec++;
	}
	return (sum);
}
