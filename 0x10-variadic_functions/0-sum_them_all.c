#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function principal
 * @n: constant integer positive
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list nums;
	int sum = 0;
	unsigned int x;

	if (n == 0)
		return (0);

	va_start (nums, n);
	for (x = 0; x < n; x++)
	{
		sum += va_arg (nums, unsigned int);
	}
	va_end (nums);
	return (sum);
}
