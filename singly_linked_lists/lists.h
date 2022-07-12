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
typedef struct list_s
{
	char *str;
	unsigned int lenght;
	struct list_s *link;
} list_t;

size_t print_list(const list_t *h);


#endif
