#include "dog.h"
#include <stdio.h>
/**
* init_dog - define new type
* @name: name
* @age: age
* @owner: owner
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
