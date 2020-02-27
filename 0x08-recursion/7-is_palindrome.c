#include "holberton.h"
int _strlen(char *s);
int pali(char *s, int x2, int size);

/**
 * is_palindrome - compare for find palindrome
 * @s: input of main
 * Return: value
 */

int is_palindrome(char *s)
{
	int num = 0, size2 = 0;

	size2 = _strlen(s) - 1;
	return (pali(s, num, size2));
}

/**
 * _strlen - long of string
 * @s: of main
 * Return: s
 */

int _strlen(char *s)
{

	int i = 0;

	if (*s != '\0')
	{
		i = _strlen(s + 1);
		i++;
	}

	return (i);
}

/**
 * pali - comparator
 * @s: of main
 * @x2: value 1
 * @size: value 2
 * Return: int
 */

int pali(char *s, int x2, int size)
{

	int  valor = 0;

	if (size == 1)
		return (1);

	if (s[size] != s[x2])
		return (0);

	if (s[size] == s[x2])
	{
		size--;
		x2++;
		valor = pali(s, x2, size);
	}
	return (valor);
}
