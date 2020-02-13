#include "holberton.h"
/**
 * print_diagonal - function that prints the numbers, from 0 to 9.
 * @n: number of times repeat line _
 * Return: Always 0.
 */
void print_diagonal(int n)

{
	int r;
	int e;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (r = 1; r <= n; r++)
		{
			for (e = 2; e <= r; e++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
