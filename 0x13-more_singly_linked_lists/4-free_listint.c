#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a list of nodes
 * @head: Pointer to the first element of the list
*/

void free_listint(listint_t *head)

{
	listint_t *aux;

	if (head == NULL)
	{
		return;
	}

	while (head->next != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
	free(head);
}
