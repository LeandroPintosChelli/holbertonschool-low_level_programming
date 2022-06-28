#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strlen - check code
* @str: char
* Return: Always 0
*/
int _strlen(char *s)
{
int count;
count = 0;
while (*s != '\0')
	{
	count++;
	s++;
	}
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
	int lename, lenowner, i, j;

	dog_t *p;

	p = malloc(sizeof(dog_t));
		if (p == NULL)
			return (NULL);

	lename = _strlen(name);
	lenowner = _strlen(owner);

	p->name = malloc(lename + 1);
		if (p->name == NULL)
		free(p->lename);
		free(p);
		return (NULL);

	p->owner = malloc(lenowner + 1);
		if (p->owner == NULL)
		free(p->name);
		free(p->owner);
		free(p);
		return (NULL);
p->age = age;

		for (i < 0; i < lename; i++)
		{
			p->name[i] = name [i];
		}
		p->name = '\0';
		for (j < 0; j < lenowner; j++)
		{
			p->owner[j] = owner[j];
		}
		p->owner = '\0';
	return(p);
}
