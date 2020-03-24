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

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;

	else
		new_node->next = *head;

	if (n != '\0')
		new_node->n = n;

	*head = new_node;

	return (*head);
}
