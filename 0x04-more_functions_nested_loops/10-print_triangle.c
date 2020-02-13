#include "holberton.h"
/**
 * print_triangle - function that prints the square.
 * @size: number of times repeat square #
 * Return: Always 0.
 */
void print_triangle(int size)

{

	int anch;
	int larg;
	int ini;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (larg = 1; larg <= size; larg++)
		{
			for (anch = 1; anch <= size; anch++)
			{
				ini = -(anch - size);
				if (larg >= (ini + 1))
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
