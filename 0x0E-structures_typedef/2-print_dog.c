#include "dog.h"

/***/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}
	else
	{
		if (d->age == 0.0 || d->name == NULL || d->owner == NULL)
		{
			printf("nil\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("owner: %s\n", d->owner);
		}
	}
}
