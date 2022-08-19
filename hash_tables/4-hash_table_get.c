#include "hash_tables.h"
/**
 * hash_table_get - given key, get value
 * @ht: hash table
 * @key: key
 * Return: value; or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	tmp = (ht->array[index]);
	if (tmp)
	{
		while (strcmp(tmp->key, strdup(key)) != 0)
			tmp = tmp->next;
		return (tmp->value);
	}
	else
		return (NULL);
}
