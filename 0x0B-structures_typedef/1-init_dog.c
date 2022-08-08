#include "dog.h"
#include <stdio.h>
/**
* init_dog - define new type
* @d: char
* @age: age
* @owner: owner
* @name: name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
