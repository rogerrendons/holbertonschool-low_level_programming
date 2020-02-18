#include "holberton.h"
/**
 * puts_half - function that prints the reverse Holberton.
 * @str: caracters to evaluate
 * Return: i.
 */
void puts_half(char *str)
{

	short i, n = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		n = (i / 2);
	}
	else
	{
		n = (i - 1) / 2;
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
	return;
}
