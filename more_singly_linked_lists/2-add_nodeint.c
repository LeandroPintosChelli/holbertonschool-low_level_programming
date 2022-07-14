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
	int *p;

	newlist = malloc(sizeof(listint_t));

	if (p != NULL)
	{
		p->n = n;
		p->next = *head;
		*head = p;
	}
	return (*head);
}
