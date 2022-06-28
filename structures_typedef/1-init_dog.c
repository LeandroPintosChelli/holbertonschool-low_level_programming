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
}
