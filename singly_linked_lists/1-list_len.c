#include "lists.h"
/**
* list_len - count number of elements
* @h: list pointer
* Return: count
*/
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
