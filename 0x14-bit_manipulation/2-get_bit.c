#include "holberton.h"
/**
 * get_bit - value bit a index.
 * @n: number.
 * @index: index, bit you want.
 * Return: the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		n >>= index;
		return (n & 1);
	}
	return (-1);
}
