#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ofile;
	int cont;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	ofile = open(filename, O_APPEND | O_WRONLY);
	if (ofile == -1)
		return (-1);

	for (cont = 0; text_content[cont] != '\0'; cont++)
	{
		if (write(ofile, &text_content[cont], 1) == -1)
		{
			close(ofile);
			return (-1);
		}
	}
	close(ofile);
	return (1);
}
