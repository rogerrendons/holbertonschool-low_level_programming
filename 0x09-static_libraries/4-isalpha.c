#include "holberton.h"
/**
 * _isalpha - Entry point
 * @c: caracter to print
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
c = 1;
}
else
{
c = 0;
}
return (1 & c);
}
