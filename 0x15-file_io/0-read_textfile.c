#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ofile;
	int counter;
	int numcar;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if(buffer == NULL)
		return (0);

	ofile = open(filename, O_RDONLY);

	if (ofile == -1)
	{
		free(buffer);
		return (0);
	}

	numcar = read(ofile, buffer, letters);

	if (numcar == -1)
	{
		close(ofile);
		free(buffer);
		return (0);
	}

	for (counter = 0; counter < numcar; counter++)
	{
		if (write(STDOUT_FILENO, &buffer[counter], 1) == -1)
		{
			close(ofile);
			free(buffer);
			return (0);
		}
	}

	close(ofile);
	free(buffer);

	return (numcar);
}
