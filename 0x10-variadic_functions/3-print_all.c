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
	char *val;
	int index = 0;
	int sw;

	va_start(str, format);

	while (format && format[index])
	{
		sw = 1;
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
			val = va_arg(str, char *);
			if ((val == NULL) || (val[0] == '\0'))
			{
				printf("(nil)");
				break;
			}
			printf("%s", val);
			break;
		default:
			sw = 0;
		};
		if (format[index + 1] && sw == 1)
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(str);
}
