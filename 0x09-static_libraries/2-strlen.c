#include "holberton.h"
/**
 * _strlen - function that prints the square.
 * @s: caracters to evaluate
 * Return: i.
 */
int _strlen(char *s)
{

	short i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
