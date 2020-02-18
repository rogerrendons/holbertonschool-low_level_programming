#include "holberton.h"
/**
 * rev_string - function that prints the reverse Holberton.
 * @s: string initial.
 * Return: 0.
 */
void rev_string(char *s)
{
	int i;
	int j;
	char aux =;

	j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	i = 0;
	while (i <= j)
	{
		aux = s[j];
		s[j] = s[i];
		aux = s[i];
		i++;
		j--;
	}
}
