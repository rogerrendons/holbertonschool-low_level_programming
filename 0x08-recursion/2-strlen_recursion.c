#include "holberton.h"

/**
 * _strlen_recursion - Print leng of string of characters use recursion.
 * @s: Pointer contents string.
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int cont = 0;
	if (*s == '\0')
	{
		return (cont++);
	}
	cont = (1 + _strlen_recursion(s + 1));
	return (cont);
}
