#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
/**
* struct node - singly linked list
* @str: string
* @lenght: lenght of a string
*
* Description: singly linked list node structure
*/
typedef struct node
{
	char *str;
	unsigned int lenght;
	struct node *next;
} list_t;
size_t print_list(const list_t *h);
#endif
