#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free list
 * @head: free list_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		p = ((*head)->next);
		free(*head);
		*head = p;
	}
	head = NULL;
}
