#include "hash_tables.h"

/**
 * hash_table_delete - deletes table
 * @ht: pointer of table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int rec;
    hash_node_t *node, *auxnode;

	if (ht == NULL)
		return;

	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (rec = 0; ht && rec < ht->size; ++rec)
	{
		if (ht->array[rec])
		{
			node = ht->array[rec];
			while ((auxnode = node))
			{
				node = node->next;
				free(auxnode->key);
				free(auxnode->value);
				free(auxnode);
			}
		}
	}
	free(ht->array);
	free(ht);
}
