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
	int val_int;

	if (separator == NULL)
		separator = "";

	va_start(nums, n);
	for (x = 0; x < n; x++)
	{
		val_int = va_arg(nums, int);

		if (x != n - 1)
			printf("%d%s", val_int, separator);
		else
			printf("%d", val_int);
	}
	printf("\n");
	va_end(nums);
}
