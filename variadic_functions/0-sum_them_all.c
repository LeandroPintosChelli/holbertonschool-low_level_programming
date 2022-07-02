#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - check code
* @n: sum
* Return: Always 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list operations;
	unsigned int res = 0;
	unsigned int x;

	va_start(operations, n);

	for (x = 0; x < n; x++)
	{
		res += va_arg(operations, int);
	}
	va_end(operations);

	return (res);
}
