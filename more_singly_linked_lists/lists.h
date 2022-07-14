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
int _putchar(char c);
size_t print_listint(const listint_t *h);



#endif
