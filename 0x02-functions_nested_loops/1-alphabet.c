#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
  char car;
  for (car = 'a' ; car <= 'z' ; car++)
    {
      _putchar (car);
    }
  _putchar ('\n');
  return (0);
}
