#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* add_node - agrega nodo al inicio
* @head: head
* @str: string
* Return: *head
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newlist;
	newlist = malloc(sizeof(list_t));
	struct node *newnode = malloc(sizeof(struct node));

	while (*head->next != NULL)
	{
		(*head) = (*head)->next;
		(*head)->next = newnode;
	}
	if (newlist != NULL)
	{
		newlist->len = strlen(str);
		newlist->str = strdup(str);
		newlist->next = (*head);
		(*head) = newlist;
	}
	return (*head);
}
