#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 */

int get_bit(unsigned long int n, unsigned int index)

{
	unsigned int comp, y;
	unsigned int lop;
	unsigned long int x = n;

	for (lop = 0; x; lop++)
	{
		x = x >> 1;
	}
	lop--;
	if (lop >= index)
		return (-1);

	for (comp = lop; comp >= 0; comp--)
	{
		y = n >> comp;
		if (y & 1)
		{
			_putchar('1');
			comp == index ? return (1);
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
