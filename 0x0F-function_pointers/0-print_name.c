#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - conect a pointer
 * @name: name from  manin
 * @f: pointer funcion.
 *
 * Return: Void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != '\0')
	{
		(*f)(name);
	}
}
