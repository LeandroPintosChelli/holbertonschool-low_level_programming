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
	printf("%s()\n", name);
		f(name);
}
