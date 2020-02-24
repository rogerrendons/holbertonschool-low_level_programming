#include "holberton.h"
/**
 * _strspn - get leng.
 * @s: string 1.
 * @accept: for scan in the s.
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)

{
	int i, p, x;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	p = 0;
	while (s[p] != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (s[p] == accept[x])
			{
				i--;
			}
			x++;
		}
		p++;
	}
	return (i);
}
