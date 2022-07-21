#include "lists.h"
/**
* dlistint_len - print size of a list
* @h: number
* Return: len
*/
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
