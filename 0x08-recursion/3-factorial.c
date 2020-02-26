#include "holberton.h"

/**
 * factorial - check the code for Holberton School students.
 * @n: number to evaluate to factorial.
 * Return: Always 0.
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
