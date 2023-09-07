#include "hash_tables.h"

/**
 * key_index - returns the index at which the key/value
 * pair should be stored in the array of the hash table
 * @key: the key
 * @size: the Hash Table array's size
 *
 * Return: that index, or -1 if any error
 */
unsigned long int	key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2(key) % size;
	return (index);
}
