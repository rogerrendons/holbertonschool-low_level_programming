#include "holberton.h"
int primescan(int num, int num2);

/**
 * is_prime_number - number is prime
 * @n: by main
 * Return: value
 */

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	else
	{
		return (primescan(n, n - 1));
	}
}

/**
 * primescan - scan for number prime
 * @num: num to evaluate
 * @num2: second number to evaluate
 * Return: value
 */

int primescan(int num, int num2)
{
	if (num2 == 2)
		return (1);
	if (num2 <= 1)
		return (0);
	if (num % num2 == 0)
	{
		return (0);
	}
	else
	{
		return (primescan(num, num2 - 1));
	}
}
