#include "holberton.h"
/**
 * puts_half - function that prints the reverse Holberton.
 * @str: caracters to evaluate
 * Return: 0.
 */
void puts_half(char *str)
{
	int i;
	int n;
	int length_of_the_string;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	length_of_the_string = i;
	if ((length_of_the_string % 2) == 0)
	{
		n = (length_of_the_string / 2);
	}
	else
	{
		n = (length_of_the_string - 1) / 2;
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
