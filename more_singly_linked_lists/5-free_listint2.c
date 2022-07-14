#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list
 * @head: free list_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	while (head->next)
	{
		head = NULL;
		free(*head);
	}
}
