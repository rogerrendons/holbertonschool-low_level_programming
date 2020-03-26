#include <string.h>
#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: char of 1 or 0 to form a binary.
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{

	int rec = 0;
	unsigned int n = 0;
	unsigned int dupl = 1;

	if (b == NULL)
		return (0);

	while (b[rec] != '\0')
		rec++;

	rec--;
	while (rec >= 0)
	{
		if ((b[rec] != '1') && (b[rec] != '0'))
			return (0);

		if (b[rec] == '1')
			n = n + dupl;

		dupl = dupl * 2;
		rec--;
	}

	return (n);
}
