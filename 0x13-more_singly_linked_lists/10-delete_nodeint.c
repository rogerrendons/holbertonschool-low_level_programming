#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - for managment of a list
 * @head: poniter initial
 * @index: new list of numbers
 * Return: -1 to ok.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int Cont = 0;
	listint_t *CopyHead;
	listint_t *BackNode = NULL;

	if (!*head || !head)
		return (-1);

	CopyHead = *head;

	while (CopyHead)
	{
		if (Cont == index)
		{
			if (BackNode)
				BackNode->next = CopyHead->next;
			else
				*head = CopyHead->next;

			free(CopyHead);
			return (1);
		}

		BackNode = CopyHead;
		CopyHead = CopyHead->next;
		Cont++;
	}

	return (-1);
}
