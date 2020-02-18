#include "holberton.h"
/**
 * puts_half - function that prints the reverse Holberton.
 * @str: caracters to evaluate
 * Return: 0.
 */
void puts_half(char *str)
{
	int n;
	int length_of_the_string;

	length_of_the_string = 0;
	n = 0;
	while (str[length_of_the_string] != '\0')
	{
		if ((length_of_the_string % 2) != 0)
		{
			n = ((length_of_the_string - 1) / 2);
			n++;
		}
	length_of_the_string++;
	}
	n++;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
	}
