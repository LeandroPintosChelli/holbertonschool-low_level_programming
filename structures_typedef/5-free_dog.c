#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - check code
* @d: var
* Return: Always 0
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

		free(d);
}
