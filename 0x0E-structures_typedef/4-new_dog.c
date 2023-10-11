#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: return new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
	}

	return (new_dog);
}
