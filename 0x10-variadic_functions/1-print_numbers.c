#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function principal
 * @separator: Separator of numbers
 * @n: numbers
 * Return: int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list nums;
	unsigned int x;

	va_start (nums, n);

	for (x = 0; x < n; x++)
	{
		if (x != n-1)
			printf("%d%s", va_arg(nums, unsigned int),separator);
		else
			printf("%d", va_arg(nums, unsigned int));
	}
	printf("\n");
	va_end (nums);
}
