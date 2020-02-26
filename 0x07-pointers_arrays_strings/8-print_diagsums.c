#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 * @a: matriz array.
 * @size: size of matriz
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int x, y, s1, s2, aux = 0;

	x = 0;
	y = 0;
	s1 = 0;
	s2 = 0;
	for (x = 0; x < size; x++)
	{
		for (y = size - 1; y >= 0; y--)
		{
			if ((x - y) == 0)
			{
				s1 = s1 + a[aux];
			}
			if ((x + y) == (size - 1))
			{
				s2 = s2 + a[aux];
			}
			aux++;
		}
	}
	printf("%d, %d\n", s2, s1);
}
