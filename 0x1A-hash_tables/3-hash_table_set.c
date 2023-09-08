#include "hash_tables.h"

/**
 * free_items - free node key and value
 * @entry: the Hash Table entry
 * @key: the entry key
 * @value: the entry value
 *
 * Return: 0 on Success
 */
int free_items(hash_node_t *entry, const char *key, const char *value)
{
	if (value)
		free((void *) value);
	if (key)
		free((void *) key);
	if (entry)
		free((void *) entry);

	return (0);
}

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
	char *temp = NULL;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			temp = strdup(value);
			if (!temp)
				return (0);
			free(current->value);
			current->value = temp;
			return (1);
		}
		current = current->next;
	}

	new_entry = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!new_entry)
		return (0);

	new_entry->value = strdup(value);
	new_entry->key = strdup(key);
	if (!new_entry->value || !new_entry->key)
		return (free_items(new_entry, NULL, new_entry->value));

	new_entry->next = ht->array[index];
	ht->array[index] = new_entry;

	return (1);
}
