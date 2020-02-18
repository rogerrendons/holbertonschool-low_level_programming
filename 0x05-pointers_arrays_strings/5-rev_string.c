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
	char a;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j < i)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
		i--;
		j++;
	}
}
