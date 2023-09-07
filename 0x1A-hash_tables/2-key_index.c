#include "hash_tables.h"

/**
 * key_index - returns the index at which the key/value
 * pair should be stored in the array of the hash table
 * @key: the key
 * @size: the Hash Table array's size
 *
 * Return: that index
 */
unsigned long int	key_index(const unsigned char *key, unsigned long int size)
{
	if (!key)
		return (-1);
	return (hash_djb2(key) % size);
}
