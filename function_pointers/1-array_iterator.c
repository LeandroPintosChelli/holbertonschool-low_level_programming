#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - check code
* @array: int
* @size: size
* @action: idk
* Return: Always 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (array != NULL && action != NULL)
		for (count = 0; count < size; count++)
			action(*(array + count));
}
