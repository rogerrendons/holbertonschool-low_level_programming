#include "holberton.h"
/**
 * _memset - check the code for Holberton School students.
 * @dest: buffer copied of src.
 * @src: sourse data to copy.
 * @n: size to print.
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
