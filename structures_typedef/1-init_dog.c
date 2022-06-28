#include "dog.h"
#include <stdio.h>
#ifndef DOG_H
#define DOG_H
/**
* struct dog - define new type
* @name: name
* @age: age
* @owner: owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
