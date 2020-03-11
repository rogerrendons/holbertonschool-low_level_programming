#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - conect a pointer
 * @array: array from main
 * @size: array from main.
 * @cmp: Pointer.
 *
 * Return: Void.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array) && (cmp))
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
