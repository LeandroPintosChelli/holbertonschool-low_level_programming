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
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while(head)
	{
		sum += head->next;
		head = head->next;
	}
	return (sum);
}
