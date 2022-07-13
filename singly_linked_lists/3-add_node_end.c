#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* add_node_end - agrega nodo al final
* @head: head
* @str: string
* Return: *head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	list_t *he = (*head);

	newlist = malloc(sizeof(list_t));

	if (newlist != NULL)
	{
		return (0);
	}
		newlist->str = strdup(str);
		newlist->len = strlen(str);
		newlist->next = NULL;

	if (*head == NULL)
	{
		*head = newlist;
		return (*head);
	}
	while (he != NULL && he->next != NULL)
	{
		he = he->next;
	}
	he->next = newlist;
	return (*head);
}
