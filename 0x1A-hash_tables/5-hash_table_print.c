#include "hash_tables.h"
/**
 * hash_table_print - print table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int rec;
	hash_node_t *pnode = NULL;
	int found;

	if (ht == NULL)
		return;

	printf("{");
	found = 1;
	for (rec = 0; rec < ht->size; rec++)
	{
		for (pnode = ht->array[rec]; pnode; pnode = pnode->next)
		{
			if (found == 1)
			{
				found = 0;
				printf("\'%s\': ", pnode->key);
			}
			else
				printf(", \'%s\': ", pnode->key);
			printf("\'%s\'", pnode->value);
		}
	}
	printf("}\n");
}
