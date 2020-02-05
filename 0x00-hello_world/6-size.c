#include <stdio.h>
/**
* main - Entry point
* print size variables
* Return: Always 0 (Success)
*/
int main(void)
{
int entero;
char caracter;
long int enterolargo;
long long int enterolargolargo;
float flotante;
printf("Size of a char: " sizeof(caracter));
printf("Size of an int: " sizeof(entero));
printf("Size of a long int:  " sizeof(enterolargo));
printf("Size of a long long int: " sizeof(enterolargolargo));
printf("Size of a float: " sizeof(flotante));
return (0);
}
