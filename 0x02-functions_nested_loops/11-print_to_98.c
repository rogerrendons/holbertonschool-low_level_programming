#include "holberton.h"
#include <stdio.h>
/**
* print_to_98 - entri point
* @n evaluate number
* return: n.
*/
void print_to_98(int n)
{
int sw = 1;
while (sw == 1)
{
if (n < 98)
{
printf("%d, ", n);
n = (n + 1);
}
else if (n > 98)
{
printf("%d, ", n);
n = (n - 1);
}
else
{
printf("%d", 98);
sw = 0;
}
}
printf("\n");
}
