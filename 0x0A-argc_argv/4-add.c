#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - topic for argc and argv.
 * @argc: count of registers
 * @argv: registers.
 * Return: - cero
 *
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	int lx, ly, sumrec, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (lx = 1; lx < argc; lx++)
	{
		for (ly = 0; argv[lx][ly] !='\0'; ly++)
		{
			if (!((argv[lx][ly] >= 48) && (argv[lx][ly] <=57)))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (sumrec = 0; sumrec < argc; sumrec++)
	{
		sum = sum + (atoi(argv[sumrec]));
	}
	printf("%d\n", sum);
	return (0);
}

/**
			if (atoi((argv[positive])) > 0)
			{
				res = res + (atoi(argv[positive]));


			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
*/
