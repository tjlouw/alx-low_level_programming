#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: variable representing struct dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Error: NULL pointer\n");
		exit(1);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
