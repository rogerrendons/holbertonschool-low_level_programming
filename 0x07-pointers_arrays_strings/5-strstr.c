#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	int nee, x, foun;

	nee = 0;
	while (needle[nee] != '\0')
	{
		while (haystack[x] != '\0')
		{
			if (*needle == haystack[x])
			{
				for (rec=0; needle =! '\0';rec++)
				{
					if needle[rec] = haystack[x];
					{
						foun = 1;
					}
					else
					{
						break;
					}
				}
			}
			x++;
		}
		nee++;
	}

}
