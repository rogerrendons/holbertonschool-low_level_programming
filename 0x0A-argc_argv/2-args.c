#include <stdio.h>
/**
 * main - topic for argc and argv
 *
 *
*/

int main (int argc, char *argv[]__attribute__((unused)))
{
	int count;

	printf("%s\n", argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
