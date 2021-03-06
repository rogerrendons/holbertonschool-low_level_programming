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
	unsigned int Cont = 0;
	listint_t *new_node;
	listint_t *CopyHead;
	listint_t *BackNode = NULL;

	if (!*head || !head)
		return (NULL);

	CopyHead = *head;

	while (CopyHead)
	{
		if (Cont == idx)
		{
			new_node = malloc(sizeof(listint_t));

			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = CopyHead;

			if (BackNode)
				BackNode->next = new_node;
			else
				*head = new_node;

			return (new_node);
		}
		BackNode = CopyHead;
		CopyHead = CopyHead->next;
		Cont++;
	}
	return (NULL);
}
