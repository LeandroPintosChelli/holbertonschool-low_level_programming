#include "hash_tables.h"

/**
 * hash_table_print - print key/values of hash table in order
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;
	char *d = "";

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", d, tmp->key, tmp->value);
			d = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
