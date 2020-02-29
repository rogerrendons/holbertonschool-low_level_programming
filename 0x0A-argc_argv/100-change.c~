#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - topic for argc and argv
 *
 *
*/

int main (int argc, char *argv[]__attribute__((unused)))
{

	int valid, res, acum= 0;

	for (valid = 1; valid < argc; ++valid)
	{
		if(0 == isdigit(*argv[valid]))
		{
			printf("Error\n");
			return(1);
		}
	}
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (acum = 0; acum < argc; acum++)
		{
			 res = res + (atoi(argv[acum]));
		}
		printf("%d\n", res);
	}
	return (0);
}
