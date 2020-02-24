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
	int wor, acc = 0;

	while (s[wor] != '\0')
	{
		while (accept[acc] != '\0')
		{
			printf("%s \n", s);
			printf("%s \n", accept);

/**			if (*s == *accept)
			{
				printf("%s \n", s);
				return (s);
				break;
			}
			accept++;
		}
		s++;
		if (*s == *accept)
		{
			printf("%s \n", s);
			return (s);
			break;
		}*/
			acc++;
		}
		wor++;
	}
	return (s);
}
