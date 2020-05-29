#include "hash_tables.h"

/**
 * hash_table_create - build hash table
 * @size: size hash table
 * Return: new pointer hash
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;
	unsigned int i;

	if (size == 0)
		return (NULL);

	htable = malloc(sizeof(hash_table_t));
	if (htable == NULL)
	{
		return (NULL);
	}
	else
	{
		htable->size = size;
		htable->array = malloc(size * sizeof(hash_node_t *));
		if (htable->array == NULL)
		{
			free(htable);
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
				htable->array[i] = NULL;
			return (htable);
		}
	}
}
