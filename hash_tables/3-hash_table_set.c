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
	unsigned long int index, size;

	newnode = malloc(sizeof(hash_node_t));
	if (ht == NULL || key == NULL || value == NULL || newnode == NULL)
	{
		free(newnode);
		return (0);
	}
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	newnode->key = strdup(key);
	newnode->value = strdup(value);

	if (!newnode->key || !newnode->value)
		free(newnode->key), free(newnode->value);

	if (!ht->array[index])
	{
		ht->array[index] = newnode;
		newnode->next = NULL;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			free(newnode->key), free(newnode->value), free(newnode);
		}
		else
		{
			newnode->next = ht->array[index];
			ht->array[index] = newnode;
		}
	}
	return (1);
}
