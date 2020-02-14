# include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num;
	long res;
	long fac;

	num = 612852475143;
	fac = 2;
	while (num != fac)
	{
		res = (num % fac);
		if (res == 0)
		{
			num = num / fac;
		}
		else
		{
			fac++;
		}
	}
	printf("%li\n", num);
	return (0);
}
