#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - for managment of a list
 * @h: poniter
 * Return: m Value Counter.
*/

size_t print_listint(const listint_t *h)
{

	int m;

	if (h == NULL)
	{
		return (0);
	}

	for (m = 0; h != NULL; m++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (m);

}
