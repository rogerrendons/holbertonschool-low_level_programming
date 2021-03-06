#include "holberton.h"

/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: number base.
 * @y: number exponent.
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		res = -1;
	}
	else if (y == 0)
	{
		res = 1;
	}
	else
	{
		res = (x * _pow_recursion(x, y - 1));
	}
	return (res);
}
