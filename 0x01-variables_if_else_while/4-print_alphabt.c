#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char car;
for (car = 'a' ; car <= 'z' ; car++)
{
if (car != 'q' && car != 'e')
putchar (car);
}
putchar ('\n');
return (0);
}
