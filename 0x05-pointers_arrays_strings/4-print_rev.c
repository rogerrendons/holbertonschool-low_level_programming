#include "holberton.h"
/**
 * print_rev - function that prints the reverse.
 * @s: caracters to evaluate
 * Return: i.
 */
void print_rev(char *s)
{

	short i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i != -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
