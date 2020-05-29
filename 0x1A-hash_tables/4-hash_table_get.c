#include "hash_tables.h"

/**
 * hash_table_get - gets item from table
 * @ht: pointer hash
 * @key: pointer
 * Return: hd pointer
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int ind;
	hash_node_t *hd;

	if (ht == NULL || key == NULL)
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	hd = ht->array[ind];

	if (hd == NULL)
		return (NULL);

	while (hd != NULL)
	{
		if (strcmp(hd->key, key) == 0)
			return (hd->value);
		hd = hd->next;
	}
	return (NULL);
}
