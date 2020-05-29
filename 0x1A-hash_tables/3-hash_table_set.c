#include "hash_tables.h"

/**
  * hash_table_set - function add element to table
  * @ht: hash table
  * @key: key
  * @value: value relative to key
  * Return: 1 OK or 0 Not OK
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int id;
	hash_node_t *head, *aux, *nnode;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	id = key_index((const unsigned char *)key, ht->size);
	head = ht->array[id];
	aux = ht->array[id];

	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			aux->value = strdup(value);
			return (1);
		}
		aux = aux->next;
	}

	nnode = malloc(sizeof(hash_node_t));
	if (nnode == NULL)
		return (0);

	nnode->key = strdup(key);
	nnode->value = strdup(value);

	if (head == NULL)
		nnode->next = NULL;
	else
		nnode->next = head;
	ht->array[id] = nnode;
	return (1);
}
