#include "holberton.h"
/**
 * puts_half - function that prints the reverse Holberton.
 * @str: caracters to evaluate
 * Return: 0.
 */
void puts_half(char *str)
{
	int n;
	int len;

	n = 0;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
		n++;
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
