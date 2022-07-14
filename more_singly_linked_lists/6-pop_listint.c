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
	listint_t N;

	if (!head)
	{
		return (0);
	}
	N = *head;
	*head = ((*head)->next);
	*head = N;
	free(N);
}
