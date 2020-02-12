#include "holberton.h"
/**
* print_sign - evalute character c to stdout
* @n: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int print_sign(int n)
{
if (n > 0)
_putchar('+');
else if (n < 0)
_putchar('-');
else
_putchar('0');


if (n > 0)
n = 1;
else if (n < 0)
n = -1;
else
n = 0;
return (n);
}
