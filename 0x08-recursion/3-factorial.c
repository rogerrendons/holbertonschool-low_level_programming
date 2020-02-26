#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	int res;
	int cont;

	res = 1;
	cont = 1;
	if (n < 0)
	{
		return (-1);
	}
	while (cont <= n)
	{
		res = res * cont;
		cont++;
	}
	return (res);
}
