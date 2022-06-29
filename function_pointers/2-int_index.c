#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - check code
* @array: int
* @size: int
* @cmp: int
* Return: Always 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || cmp == NULL || size <= 0)
		return(-1);

	for (count = 0; count < size; count++)

	if (cmp(*array[count]))
		return (count);

	return (-1);
}
