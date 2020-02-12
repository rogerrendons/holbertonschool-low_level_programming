#include "holberton.h"
#include "stdlib.h"
/**
* print_last_digit - evalute last character
* @n: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int print_last_digit(int n)
{
n = abs(n);
n = (n % 10);
_putchar('0' + n);
return (n);
}
