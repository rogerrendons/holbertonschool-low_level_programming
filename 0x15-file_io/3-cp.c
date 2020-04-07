#include "holberton.h"

/**
 * main - file to file.
 * @argc: arg count.
 * @argv: arguments.
 * Return: standard error.
 *
 */
int main(int argc, char **argv)
{
	int _file_from, _file_to, _read, _write, len = 0;
	char *buffer = malloc(1024);

	if (argv[1] == NULL)
		exit(98);

	if (argc != 3)
		exit(97);

	_file_from = open(argv[1], O_RDONLY);
	if (_file_from == -1)
		return (98);
	return (0);
}
