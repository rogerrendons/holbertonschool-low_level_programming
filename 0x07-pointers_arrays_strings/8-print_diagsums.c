#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{

	int x, y = 0;
	int s1, s2 = 0;
	y = size;

	for (x = 0; x <= size; x++)
	{
		s1 = s1 + (a[x][x]);
		y--;
	}
	printf("%d, %d \n", s1, s2);
}
