#include "holberton.h"

/**
 * _strlen_recursion - Print leng of string of characters use recursion.
 * @s: Pointer contents string.
 * Return: Always 0.
 */

int cont;
int _strlen_recursion(char *s)
{
	int cont;
	if (*s == '\0')
	{
		return (cont);
	}
	cont++;
	_strlen_recursion(s + 1);
}
