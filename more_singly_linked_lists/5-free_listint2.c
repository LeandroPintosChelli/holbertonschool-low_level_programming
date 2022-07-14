#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free list
 * @head: free list_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *lib;

	while (head)
	{
		lib = head->next;
		free(head);
		head = lib;
		head = NULL;
	}
}
