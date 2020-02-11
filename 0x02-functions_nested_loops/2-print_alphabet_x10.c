#include "holberton.h"
/**
* print_alphabet_x10 - Entry point
* return void: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char car;
int i;
for (i = 0; i <= 9; i++)
{
for (car = 'a' ; car <= 'z' ; car++)
{
_putchar (car);
}
_putchar ('\n');
}
}
