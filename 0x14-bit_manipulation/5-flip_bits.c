#include "holberton.h"
/**
 * flip_bits - procedure.
 * @n: number of main.
 * @m: secon number of main.
 * Return: bits passed.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int pass = 0;
	unsigned long int iter;

	for (iter = 0; iter <= ((sizeof(n) * 8) - 1); iter++)
	{
		if (((n ^ m) >> iter) & 1)
			pass++;
	}

	return (pass);
}
