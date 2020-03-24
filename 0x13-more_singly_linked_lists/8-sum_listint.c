#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - get determinate node.
 * @head: Head of linked list.
 * Return: Always 0.
*/

int sum_listint(listint_t *head)
{

	unsigned int cont = 0;
	int sum = 0;

	if (head == NULL)
		return (0);

	for (cont = 0; head != NULL; cont++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
