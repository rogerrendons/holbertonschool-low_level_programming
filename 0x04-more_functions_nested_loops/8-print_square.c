#include "holberton.h"
/**
 * print_square - function that prints the square.
 * @size: number of times repeat square #
 * Return: Always 0.
 */
void print_square(int size)

{

	int anch;
	int larg;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (larg = 1; larg <= size; larg++)
		{
			for (anch = 1; anch <= size; anch++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
