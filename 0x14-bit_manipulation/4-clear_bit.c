#include "holberton.h"
/**
 * clear_bit - value of index.
 * @n: pointer.
 * @index: bit to set.
 * Return: -1 error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(*n) * 8)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
