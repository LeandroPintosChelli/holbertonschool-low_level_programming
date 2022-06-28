#include "dog.h"
#include <stdio.h>
#ifndef init_dog
#define init_dog
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
#endif
