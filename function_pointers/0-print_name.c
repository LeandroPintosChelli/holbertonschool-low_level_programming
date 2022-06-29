#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*
*
*
*/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
