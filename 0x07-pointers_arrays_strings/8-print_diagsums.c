#include "holberton.h"
#include <stdio.h>

/**
 * print_diagrams - check the code for Holberton School students.
 * @a: matriz array.
 * @size: size of matriz
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int x, y = 0;


	y = size;
	for (x = 0; x <= size; x++)
	{
		s1 = s1 + a[x][y];
		s2 = s2 + a[y][x];
		y--;
		}
	printf("%d, %d \n", s1);
}
