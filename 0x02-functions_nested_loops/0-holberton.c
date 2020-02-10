#include "holberton.h"
/**
 * main - Entry point
 * putchar proyect
 * Return: Always 0 (Success)
 */
int main(void)
{
char *string = "Holberton";
short i = 0;
while (string[i] != '\0')
{
_putchar(string[i]);
i++;
}
_putchar('\n');
return (0);
}
