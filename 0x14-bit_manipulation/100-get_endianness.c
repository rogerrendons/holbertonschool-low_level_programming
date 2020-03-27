#include <stdio.h>
#include <stdint.h>
#include "holberton.h"

/**
 * get_endianness - get a information of machine.
 * union - struct
 * Return: information of machine.
 */

int get_endianness(void)
{
	int16_t i = 1;
	int8_t *p = (int8_t *) &i;

	return (p[0]);
}
