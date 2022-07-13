#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newlist;
	char *strcp = strdup(str);

	list_t *new list = malloc(sizeof(list_t));

	if (newlist != NULL)
	{
		newlist->str = strcp;
		newlist->next = head;
		head = newlist;
	}
	return (newlist);
}
