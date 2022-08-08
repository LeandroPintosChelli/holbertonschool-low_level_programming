#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* print_char - check code
* @all: const
*/
void print_char(va_list all)
{
	printf("%c", va_arg(all, int));
}
/**
* print_integer - check code
* @all: print
*/
void print_integer(va_list all)
{
	printf("%i", va_arg(all, int));
}
/**
* print_float - check code
* @all: print
*/
void print_float(va_list all)
{
	printf("%f", va_arg(all, double));
}
/**
* print_string - check code
* @all: print
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
* print_all - print va_list
* @format: print
*/
void print_all(const char * const format, ...)
{
	va_list all;
	char *sep = "";
	int i, j;

	todo_t lett[] = { {'c', print_char},
			  {'i', print_integer},
			  {'f', print_float},
			  {'s', print_string},
			  {'\0', NULL} };

	va_start(all, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (lett[j].print != '\0')
		{
			if (lett[j].print == format[i])
			{
				printf("%s", sep);
				lett[j].f(all);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(all);
	printf("\n");
}
