#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - Ceate array.
 * @s1: string 1.
 * @s2: string 2.
 * @n: Number of position to print s2.
 * Return: char.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int ts1, ts2, tconc, tconc2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ts1 = 0;
	while (s1[ts1] != '\0')
		ts1++;
	ts2 = 0;
	while (s2[ts2] != '\0')
		ts2++;
	if (n >= ts2)
	{
		ts1 = 0;
		s1 = "";
	}
	else
		ts2 = n;
	tconc = ts1 + ts2 + 1;
	concat = malloc(sizeof(char) * tconc);
	if (concat == NULL)
		return (NULL);
	for (tconc2 = 0; tconc2 < ts1; tconc2++)
		concat[tconc2] = s1[tconc2];
	for (tconc2 = 0; tconc2 < ts2; tconc2++)
		concat[tconc2 + ts1] = s2[tconc2];
	concat[ts1 + ts2] = '\0';
	return (concat);
}
