#include "holberton.h"
/**
 * set_bit - value bit.
 * @n: number.
 * @index: index, bit to set.
 * Return: 1 worked, -1 error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
