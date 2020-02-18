#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that prints the reverse Holberton.
 * @a: vector to evaluate
 * @n: size vector
 * Return: 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
