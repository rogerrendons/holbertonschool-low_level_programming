#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int num;
int dec;
for (dec = '0'; dec <= '8'; dec++)
{
for (num = dec + 1; num <= '9'; num++)
{
putchar (dec);
putchar (num);
if (!(dec == '8' && num == '9'))
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
