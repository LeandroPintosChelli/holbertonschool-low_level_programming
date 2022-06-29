#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - check code
* @s: char
* Return: 0
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	while (ops[i].op)
	{
		if (*(ops[i].op != *s))
			continue;
	}
	else
	{
	return (ops[i].f);
}
