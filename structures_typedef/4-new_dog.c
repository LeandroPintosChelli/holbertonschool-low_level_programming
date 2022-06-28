#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strlen - check code
* @str: char
* Return: Always 0
*/
int _strlen(char *str)
{
	int count = 0;

	for (count = 0; *(str + count); count++)
		return (count);
}
/**
* new_dog - check code
* @name: char
* @age: float
* @owner: char
* Return: Always 0
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *firulais;

	firulais = malloc(sizeof(dog_t));
	if (firulais ==  NULL)
		return (NULL);
	firulais->age = age

	if (name != NULL)
		{
			free(firulais);
			return (NULL);
		}
	firulais->name = (name)
}
