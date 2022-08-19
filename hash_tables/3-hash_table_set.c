#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add
 * @value: The value associated with key.
 * Return: 0 on failure, 1 on success.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = value_copy;
		return (1);
	}
	newnode = malloc(sizeof(hash_node_t));
	if(newnode == NULL)
		return (0);

	newnode->key = strdup(key);

	newnode->value = value_copy;
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
