#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - resulonvert integer to binary.
 *@n: is a interger.
 */

void print_binary(unsigned long int n)
{
	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
