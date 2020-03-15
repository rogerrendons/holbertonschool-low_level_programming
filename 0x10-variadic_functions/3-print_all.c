#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function principal
 * @format:  list of types of arguments passed to the function
 * Return: int
 */

void print_all(const char * const format, ...)
{

	va_list str;
	int index = 0;

	va_start(str, format);

	while (format && format[index])
	{
		switch (format[index])
		{
		case 'c':
			printf("%c", va_arg(str, int));
			break;
		case 'i':
			printf("%i", va_arg(str, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(str, double));
			break;
		case 's':
			printf("%s", va_arg(str, char *));
			break;
		};
		if (index > 0 && format[index + 1])
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(str);
}
