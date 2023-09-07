#include "hash_tables.h"

/**
 * hash_table_set - add a key/value element to the Hash Table
 * @ht: the Hash Table
 * @key: the entry key
 * @value: the entry value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_entry = NULL, *current = NULL;
	unsigned long int index;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	new_entry = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!new_entry)
		return (0);
	new_entry->value = strdup(value);
	if (!new_entry->value)
	{
		free(new_entry);
		return (0);
	}
	new_entry->key = (char *) key;
	current = ht->array[index];
	if (current == NULL) /* there is no collision */
	{
		new_entry->next = NULL;
		ht->array[index] = new_entry;
		return (1);
	}

	while (current)	/* if there is a collision */
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = new_entry->value;
			free(new_entry);
			return (1);
		}
		current = current->next;
	}
	new_entry->next = ht->array[index];
	ht->array[index] = new_entry;
	return (1);
}
