#include "lists.h"
#include <stdlib.h>
/**
* get_dnodeint_at_index - agrega nodo al index
* @head: head
* @index: int
* Return: *head
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		if (!head)
		{
			return (NULL);
		}
			head = head->next;
			count++;
	}
	return (head);
}
