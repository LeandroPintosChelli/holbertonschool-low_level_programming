#include "dog.h"
#include <stdio.h>
#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
