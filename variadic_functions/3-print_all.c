#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* _char - check code
* @: const
*/
void print_char(va_list all)
{
	printf("%c", va_arg(all, int));
}
/**
*
*
*/
void print_integer(va_list all)
{
	printf("%i", va_arg(all, int));
}
/**
*
*
*/
void print_float(va_list all)
{
	printf("%f", va_arg(all, double));
}
/**
*
*
*/
void print_string(va_list all)
{
	char *s;

	s = va_arg(all, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);

}
/**
*
*
*/
void print_all(const char * const format, ...)
{
	int i;

	va_list all;
	char *sep;

	todo_t lett[] = {
	{"c", print_char},
	{"i", print_integer},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
	};
}
