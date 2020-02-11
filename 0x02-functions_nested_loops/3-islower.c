#include "holberton.h"
/**
 * _islower - Entry point
 * @c: caracter to print
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
c = 1;
}
else
{
c = 0;
}
return (1 & c);
}
