#include "holberton.h"
/**
 * puts2 - function that prints the reverse Holberton.
 * @str: caracters to evaluate
 * Return: null.
 */
void puts2(char *str)
{

	short i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
