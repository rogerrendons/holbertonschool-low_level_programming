#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - for managment of a list
 * @head: poniter initial
 * @index: new list of numbers
 * Return: -1 to ok.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *fwr, *Aux;
	unsigned int i;

	if (*head != NULL)
	{
		fwr = *head;
		for (i = 0; fwr != NULL; i++)
		{
			if (i == index)
			{
				Aux = fwr;
				if (Aux->prev != NULL)
				{
					fwr = fwr->prev;
					fwr->next = Aux->next;
				}
				else
					*head = Aux->next;
				if (Aux->next != NULL)
				{
					fwr = Aux->next;
					fwr->prev = Aux->prev;
				}
				free(Aux);
				return (1);
			}
			fwr = fwr->next;
		}
	}
	return (-1);
}
