#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
* sum_listint - return the sum of all data
* @head: head
* Return: *head
*/
int sum_listint(listint_t *head)
{
	int count = 0;

	if (!head)
	{
		return (0);
	}
	while(count)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
