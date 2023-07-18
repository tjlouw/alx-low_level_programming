#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory of dog
 * @d: the struct of dog to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}
