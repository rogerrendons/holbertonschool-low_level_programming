#include "holberton.h"
/**
 * _puts - function that prints the square.
 * @str: caracters to evaluate
 * Return: 0.
 */
void _puts(char *str)
{

	short i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
