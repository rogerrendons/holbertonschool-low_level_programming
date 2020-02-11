#include "holberton.h"
/**
 * print_alphabet - Entry point
 *
 * return void: Always 0 (Success)
 */
void print_alphabet(void)
{
char car;
for (car = 'a' ; car <= 'z' ; car++)
{
_putchar (car);
}
_putchar ('\n');
}
