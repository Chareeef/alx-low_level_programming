#include "hash_tables.h"

/**
 * shash_table_create - create a Sorted Hash Table
 * @size: the Sorted Hash Table array's size
 *
 * Return: a pointer tht new Sorted Hash Table, or NULL (error)
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht = (shash_table_t *) malloc(sizeof(shash_table_t));

	if (!sht)
		return (NULL);
	sht->size = size;
	sht->array = (shash_node_t **) malloc(sizeof(shash_node_t *) * size);
	if (!(sht->array))
	{
		free(sht);
		return (NULL);
	}

	sht->shead = NULL;
	sht->stail = NULL;

	return (sht);
}

/**
 * free_snode - free node key and value
 * @node: the Sorted Hash Table node
 * @key: the node key
 * @value: the node value
 *
 * Return: 0 on Success
 */
int free_snode(shash_node_t *node, const char *key, const char *value)
{
	if (value)
		free((void *) value);
	if (key)
		free((void *) key);
	if (node)
		free((void *) node);

	return (0);
}

/**
 * shash_sorted_insert - insert a node inb the Sorted
 * Linked List depending on ASCII value
 * @ht: the Sorted Hash Table
 * @node: new Sorted Hash Table node
 *
 * Return: 1 on Success
 */
int shash_sorted_insert(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current;

	current = ht->shead;

	if (!current)
	{
		ht->shead = node;
		ht->stail = node;
		node->snext = NULL;
		node->sprev = NULL;
		return (1);
	}

	while (current)
	{
		if (strcmp(current->key, node->key) > 0) /* Ex: "ac"-"abc" > 0 */
		{
			if (current == ht->shead) /* Insert at shead */
				ht->shead = node;
			node->snext = current;
			node->sprev = current->sprev;
			if (current->sprev)
				current->sprev->snext = node;
			current->sprev = node;
			return (1);
		}
		current = current->snext;
	}

	/* Insert to stail */
	node->sprev = ht->stail;
	node->snext = NULL;
	ht->stail->snext = node;
	ht->stail = node;

	return (1);

}

/**
 * shash_table_set - add a key/value element to the Sorted Hash Table
 * @ht: the Sorted Hash Table
 * @key: the entry key
 * @value: the entry value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_entry = NULL, *current = NULL;
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

	new_entry = (shash_node_t *) malloc(sizeof(shash_node_t));
	if (!new_entry)
		return (0);

	new_entry->value = strdup(value);
	new_entry->key = strdup(key);
	if (!new_entry->value || !new_entry->key)
		return (free_snode(new_entry, NULL, new_entry->value));

	new_entry->next = ht->array[index];
	ht->array[index] = new_entry;

	return (shash_sorted_insert(ht, new_entry));
}

/**
 * shash_table_get - retrieve a value associated with a key
 * @ht: the Sorted Hash Table
 * @key: the entry key
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current = NULL;
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

/**
 * shash_table_print - print the key/value in the order
 * that they appear in the Sorted Linked Lis of the Sorted Hash Table.
 * @ht: the Sorted Hash Table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	int not_first = 0;

	if (!ht)
		return;

	printf("{");

	current = ht->shead;
	while (current)
	{
		if (not_first)
			printf(", ");

		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		not_first = 1;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - print, in reverse, the key/value in the order
 * that they appear in the Sorted Linked Lis of the Sorted Hash Table.
 * @ht: the Sorted Hash Table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	int not_first = 0;

	if (!ht)
		return;

	printf("{");

	current = ht->stail;
	while (current)
	{
		if (not_first)
			printf(", ");

		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		not_first = 1;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a Sorted Hash Table
 * @ht: the Sorted Hash Table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current = NULL, *temp = NULL;

	if (!ht)
		return;

	current = ht->shead;

	while (current)
	{
		temp = current;
		free(temp);
		current = current->snext;
	}

	free(ht->array);
	free(ht);
}
