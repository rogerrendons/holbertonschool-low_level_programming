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
int tel;
for (dec = '0'; dec <= '7'; dec++)
{
for (num = 1 + dec ; num <= '8'; num++)
{
for (tel = 1 + num ; tel <= '9'; tel++)
{
putchar (dec);
putchar (num);
putchar (tel);
if (!(dec == '7' && num == '8' && tel == '9'))
{
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
