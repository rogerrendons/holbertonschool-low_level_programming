#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - for managment of a list
 * @h: poniter
 * Return: forward Value Counter.
*/

size_t print_dlistint(const dlistint_t *h)
{
	int forward = 0;

	while (h)
	{
		printf("%d\n", h->n);
		forward++;
		h = h->next;
	}
	return (forward);
}
