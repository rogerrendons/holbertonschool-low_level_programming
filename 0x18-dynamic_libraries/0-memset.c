#include "holberton.h"
/**
 * _memset - check the code for Holberton School students.
 * @s: buffer memory of main.
 * @b: byte to print.
 * @n: size to print.
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
