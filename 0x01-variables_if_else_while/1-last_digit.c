#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
printf("is ");
if (digit == 0)
{
printf("%d %s \n", digit, "and is 0");
}
else if (n > 5)
{
printf("%d %s \n", n, "and is greater than 5");
}
else
{
printf("%d %s \n", n, "and is less than 6 and not 0");
}
return (0);
}
