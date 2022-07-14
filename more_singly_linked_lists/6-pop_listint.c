#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
* pop_listint - agrega nodo al final
* @head: head
* Return: *head
*/
int pop_listint(listint_t **head)
{
	int k;
	listint_t *p = *head;

	if (head == NULL)
	{
		return (0);
	}
		*head = p->next;
		k = p->n;
		free(p);
	}
	return (k);
}
