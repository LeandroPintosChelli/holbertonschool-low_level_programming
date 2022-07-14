#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* add_nodeint_end - agrega nodo al final
* @head: head
* @n: string
* Return: *head
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlist;
	listint_t *he = (*head);

	newlist = malloc(sizeof(listint_t));
	if (!newlist)
	{
		return (0);
	}

		newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
		return (*head);
	}
	while (he != NULL && he->next !=NULL)
	{
		he = he->next;
	}
	he->next = newlist;
	return (*head);
}
