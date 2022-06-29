#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - check code
* @name: char
* @f: char
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	(*f)(name);
}
