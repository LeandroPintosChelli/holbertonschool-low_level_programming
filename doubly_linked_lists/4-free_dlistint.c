#include "lists.h"
#include <stdlib.h>
/**
* free_dlistint - free
* @head: address node
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *lib;

	while (head)
	{
		lib = head->next;
		free(head);
		head = lib;
	}
}
