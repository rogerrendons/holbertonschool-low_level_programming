#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - for managment of a list
 * @h: poniter
 * Return: m Value Counter.
 */

size_t listint_len(const listint_t *h)
{
	int m;

	if (h == NULL)
	{
		return (0);
	}

	for (m = 1; h->next != NULL; m++)
	{
		h = h->next;
	}
	return (m);
}
