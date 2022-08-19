#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: key
 * @size: size of hash table array
 * Return: index where key/value pair is stored in hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
		return (0);

	index = hash_djb2(key);
	return (index % size);
}
