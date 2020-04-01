#include "holberton.h"
/**
 * read_textfile - read a text form file.
 * @char: Name of file
 * @letters: From File
 * Return: Result.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ofile, counter, numcar;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
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
	return (numcar + 1);
}
