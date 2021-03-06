#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function principal
 * @separator: Separator of numbers
 * @n: numbers
 * Return: no
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list str;
	char *verify;
	unsigned int x;

	va_start(str, n);
	if (separator == NULL)
		separator = "";
	for (x = 0; x < n; x++)
	{
		verify = (va_arg(str, char *));
		if (x != n - 1)
		{
			if (verify)
				printf("%s%s", verify, separator);
			else
			{
				if (x != n - 1)
					printf("(nil)%s", separator);
				else
					printf("(nil)");
			}
		}
		else
		{
			if (verify)
				printf("%s", verify);
			else
				printf("(nil)");

		}
	}
	printf("\n");
	va_end(str);
}
