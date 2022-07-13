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
	list_t *he;
	newlist = malloc(sizeof(list_t));

	if (newlist != NULL)
	{
		he->newlist = strdup(**head);
		newlist->len = strlen(str);
		newlist->str = strdup(str);
		newlist->next = (*head);
		(*head) = newlist;
	}
	return (*head);
}
