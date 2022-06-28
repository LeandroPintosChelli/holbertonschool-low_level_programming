#include "dog.h"
#include <stdio.h>
#ifndef DOG
#define DOG
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
	d = malloc(sizeof(struct d));
	if (d == NULL)
	return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
