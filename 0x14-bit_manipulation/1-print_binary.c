#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 */
void print_binary(unsigned long int n)
{
	int comp, y, lop;
	unsigned long int x = n;

	for (lop = 0; x; lop++)
	{
		x = x >> 1;
	}
	lop--;
	for (comp = lop; comp >= 0; comp--)
	{
		y = n >> comp;
		if (y & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	if (lop == -1)
	{
		y = n >> comp;
		if (y & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
