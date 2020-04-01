#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content)
{
	int ofile;
	int cont;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	ofile = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);

	if (ofile < 0)
	{
		if (errno == EEXIST)
		{
			ofile = open(filename, O_WRONLY | O_TRUNC);
			if (ofile == -1)
				return (-1);
		}
		else
			return (-1);
	}

	for (cont = 0; text_content[cont] != '\0'; cont++)
	{
		if (write(ofile, &text_content[cont], 1) == -1)
			return (-1);
	}
	close(ofile);
	return (1);
}
