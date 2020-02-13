#include "holberton.h"
/**
 * print_line - function that prints the numbers, from 0 to 9.
 * @n: number of times repeat line _
 * Return: Always 0.
 */
void print_line(int n)

{
	int t;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (t = 1; t <= n; t++)
			_putchar('_');

		_putchar('\n');
	}
}
