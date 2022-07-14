#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
* pop_listint_end - agrega nodo al final
* @head: head
* Return: *head
*/
int pop_listint(listint_t **head)
{
	listint_t *p;

	if (!head)
	{
		return (0);
	}
	while (*head)
	{
		*head = ((*head)->next);
		*head = *p;
		free(*head);
	}
}
