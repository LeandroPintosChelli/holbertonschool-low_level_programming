#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free list
 * @head: free list_t
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *lib;

	while (head)
	{
		lib = head->next;
		free(head->str);
		free(head);
		head = lib;
	}
}
