#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i, j = 0;
	for (i = 0; i < 8;i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf ("%c", a[i][j]);
		}
		putchar('\n');
	}
}
