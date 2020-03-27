#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - resulonvert integer to binary.
 *@n: is a interger.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	for (i = 0; i < index; i++)
		n = n >> 1;
	return (n & 1);
}
