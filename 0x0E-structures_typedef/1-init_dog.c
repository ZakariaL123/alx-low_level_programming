#include "main.h"
#include "dog.h"

/**
 * init_dog - function to initial
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * @d: the object from struct dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->age = age;
	d->name = name;
	d->owner = owner;
}
