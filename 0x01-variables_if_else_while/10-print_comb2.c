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
dec = '0';
while (dec <= '9')
{
num = '0';
while (num <= '9')
{
putchar (dec);
putchar (num);
if (dec <= '9' || num <= '9')
{
if (dec == '9' && num == '9')
{
break;
}
putchar (32);
putchar (44);
}
num++;
}
dec++;
}
putchar ('\n');
return (0);
}
