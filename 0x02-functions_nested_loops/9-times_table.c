#include "holberton.h"
/**
* times_table - entri point
* return: void
*/
void times_table(void)
{
int fil;
int tot;
int col;
for (col = 0; col <= 9; col++)
{
for (fil = 0; fil <= 9; fil++)
{
tot = col * fil;
if (tot / 10 == 0)
{
if (fil != 0)
_putchar(' ');
}
else
{
_putchar('0' + tot / 10);
}
_putchar('0' + tot % 10);
if (fil != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
