#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - for managment of a list
 * @head: poniter initial
 * @n: new string
 * Return: pointer.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (head == NULL)
		return (NULL);

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (NULL);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
