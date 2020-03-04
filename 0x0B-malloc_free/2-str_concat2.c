#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - Ceate array.
 * @s1: string 1.
 * @s2: string 2.
 * Return: char.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int ts1, ts2, tconc = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ts1 = 0;
	while (s1[ts1] != '\0')
	{
		ts1++;
	}
	ts2 = 0;
	while (s2[ts2] != '\0')
	{
		ts2++;
	}
	concat = malloc(sizeof(char) * (ts1 + ts2));
	if (concat == NULL)
	{
		return (NULL);
	}
	tconc = 0;
	for (tconc = 0; tconc < ts1; tconc++)
	{
		concat[tconc] = s1[tconc];
	}
	for (tconc = 0; tconc <= ts2; tconc++)
	{
		concat[tconc] = s2[tconc];
	}
	concat[ts1 + ts2] = '\0';
	return (concat);
}
