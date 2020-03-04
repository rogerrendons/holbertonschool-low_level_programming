#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - printer args
 * @ac: numbers of args
 * @av: array of args
 * Return: char
 */

char *argstostr(int ac, char **av)
{

	char *prnargs;
	int i, j, rec, large = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			large++;
		}
	}
	large = large + ac;

	prnargs = malloc(large * sizeof(char) + 1);

	if (prnargs == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			prnargs[rec] = av[i][j];
			rec++;
		}
		if (prnargs[rec] == '\0')
		{
			prnargs[rec++] = '\n';
		}
	}
	return (prnargs);
}
