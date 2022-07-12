#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
/**
*
*
*
*/
typedef struct node {
	char *str;
	unsigned int lenght;
	struct node *link;
} list_t;
size_t print_list(const list_t *h);
int _putchar(char c);


#endif
