#include "holberton.h"
int _Apoyo(int forw, int num);

/**
 * _sqrt_recursion - square root of a number
 * @n: input
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_Apoyo(n, 1));
}

/**
 * _Apoyo - Add a function in scan
 * @forw: receive parameter of forwaring
 * @num: init 1
 * Return: function
 */

int _Apoyo(int forw, int num)
{
	if (num > forw)
		return (-1);

	if (num * num == forw)
		return (num);
	else
		return (_Apoyo(forw, num + 1));

}
