#include "hash_tables.h"

/**
 * hash_table_print - print the key/value in the order
 * that they appear in the array of hash table
 * @ht: the Hash Table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int index;
	int not_first = 0;

	if (!ht)
		return;

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current)
		{
			if (not_first)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			not_first = 1;
		}
	}

	printf("}\n");
}
