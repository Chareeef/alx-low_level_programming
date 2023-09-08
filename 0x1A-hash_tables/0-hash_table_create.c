#include "hash_tables.h"

/**
 * hash_table_create - create a new Hash Table
 * @size: the Hash Table array's size
 *
 * Return: a pointer tht new Hash Table, or NULL (error)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (!(ht->array))
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
