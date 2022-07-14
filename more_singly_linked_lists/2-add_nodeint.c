#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* add_nodeint - agrega nodo al inicio
* @head: head
* @n: string
* Return: *head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlist;
	int *strcp;

	newlist = malloc(sizeof(listint_t));

	if (newlist != NULL)
	{
		newlist->n = strcp;
		newlist->len = strlen(n);
		newlist->next = (*head);
		(*head) = newlist;
	}
	return (*head);
}
