#include "lists.h"
#include <stdlib.h>
/**
* sum_dlistint - return the sum of all data
* @head: head
* Return: *head
*/
int sum_dlistint(dlistint_t *head)
{
int suma = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		suma += head->n;
		head = head->next;
	}
return (suma);
}
