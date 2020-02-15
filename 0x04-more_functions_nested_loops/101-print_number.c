#include "holberton.h"
/**
 * print_number - function that prints the number various.
 * @n: Integer for my putchar
 * Return: Always 0.
 */
void print_number(int n)

{
	int num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
