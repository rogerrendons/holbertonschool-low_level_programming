#include "holberton.h"
/**
 * more_numbers - function that prints the numbers, from 0 to 9.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int t;

	for (t = 0; t <= 9; t++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
