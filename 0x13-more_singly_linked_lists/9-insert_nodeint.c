#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - for managment of a list
 * @head: poniter initial
 * @n: new list of numbers
 * Return: m Value Counter.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	unsigned int cont;
	listint_t *scan;

	scan = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	for (cont = 0; cont <= idx; cont++)
	{
		if ((*head) == NULL)
		{
			new_node->next = NULL;
			(*head) = new_node;
		}
		else
		{
			if (cont == idx)
			{
				new_node = (*head);
				(*head) = new_node->next;
				(*head) = scan;
				return(*head);
			}
		}
		*head = (*head)->next;
	}
	return (scan);
}
