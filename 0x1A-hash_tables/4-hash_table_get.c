#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: the Hash Table
 * @key: the entry key
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL;
	unsigned long int index;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}

		current = current->next;
	}

	return (NULL);
}
