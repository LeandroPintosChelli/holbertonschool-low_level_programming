#include "lists.h"
/**
* free_dlistint
* @head: address node
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
	listint_t *lib;

	while (head)
	{
		lib = head->next;
		free(head);
		head = lib;
	}
}
