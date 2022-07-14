#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free list
 * @head: free list_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	list_t *lib;

	while (head)
	{
		lib = head->next;
		free(head->n);
		free(head);
		head = lib;
	}
}
