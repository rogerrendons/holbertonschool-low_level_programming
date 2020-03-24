#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code for Holberton School students.
 * @head: Head of linked list
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t * next_n = NULL;

	if (*head == NULL)
		return 0;

	next_n = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = next_n;

	return value;
}
