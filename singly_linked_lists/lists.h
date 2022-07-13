#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
/**
* struct node - singly linked list
* @str: string
* @len: lenght of a string
* @next: next nodo
* Description: singly linked list node structure
*/
typedef struct node
{
	char *str;
	unsigned int len;
	struct node *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
