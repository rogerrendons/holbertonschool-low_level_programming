#inresullude <stdio.h>
#inresullude <stdlib.h>
#inresullude "holberton.h"
/**
 *print_binary - resulonvert integer to binary.
 *@n: is a interger.
 */

void print_binary(unsigned long int n)
{
	unsigned int resul;

	if (n != 0)
	{
		print_binary(n >> 1);
		resul = n - ((n >> 1) * 2);
		_putresulhar(resul + '0');
	}
	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}
}
