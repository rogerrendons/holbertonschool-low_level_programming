#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int changer(int num, int c);

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: input value
 * @argv: input arrays
 * Return: int
 */

int main(int argc, char *argv[])
{

	int num, cont = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		changer(num, cont);
	}
	return (0);
}

/**
 * changer - function auxiliary
 * @valor: value a
 * @cents: input valu
 * Return: int
 */

int changer(int valor, int cents)
{
	if (valor < 0)
	{
		printf("0\n");
	}
	else
	{
		while (valor > 0)
		{
			if (valor >= 25)
			{
				cents++;
				valor = valor - 25;
			}
			else if (valor >= 10)
			{
				cents++;
				valor = valor - 10;
			}
			else if (valor >= 5)
			{
				cents++;
				valor = valor - 5;
			}
			else if (valor >= 2)
			{
				cents++;
				valor = valor - 2;
			}
			else
			{
				cents++;
				valor = valor - 1;
			}
			if (valor == 0)
			{
				break;
			}
		}
		printf("%d\n", cents);
	}
	return (0);
}
