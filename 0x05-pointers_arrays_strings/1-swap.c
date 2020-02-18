#include "holberton.h"
/**
 * swap_int - function that prints the square.
 * @a: number a
 * @b: number b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int ch;

	ch = *a;
	*a = *b;
	*b = ch;
}
