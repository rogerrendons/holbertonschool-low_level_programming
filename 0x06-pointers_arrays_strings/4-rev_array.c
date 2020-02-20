#include "holberton.h"
/**
 * reverse_array - reverse array in a.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, j, aux;

	i = 0;
	j = n;
	j--;
	while (i < j)
	{
		aux = a[j];
		a[j] = a[i];
		a[i] = aux;
		i++;
		j--;
	}
}
