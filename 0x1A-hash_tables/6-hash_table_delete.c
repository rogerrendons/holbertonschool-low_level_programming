#include "hash_tables.h"

/**
 * hash_table_delete - deletes table
 * @ht: pointer of table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int rec;

	hash_node_t *node = NULL, *auxnode = NULL;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	rec = 0;
	while (rec < ht->size)
	{
		node = ht->array[rec];
		while (!node)
		{
			auxnode = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = auxnode;
			free(auxnode);
		}
		rec++;
	}
	free(node);
	free(auxnode);
	free(ht->array);
	free(ht);
}
