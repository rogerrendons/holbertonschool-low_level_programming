#include "holberton.h"
/**
* jack_bauer - entri point
* return: void
*/
void jack_bauer(void)
{
int hor;
int min;
for (hor = 0; hor <= 23; hor++)
{
for (min = 0; min <= 59; min++)
{
_putchar('0' + hor / 10);
_putchar('0' + hor % 10);
_putchar(':');
_putchar('0' + min / 10);
_putchar('0' + min % 10);
_putchar('\n');
}
}
}
