#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
num = '0';
while (num <= '9')
{
putchar (num);
if (num <= '8')
{
putchar (32);
putchar (44);
}
num++;
}
putchar ('\n');
return (0);
}
