#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 * @d: pointer to a dog of dog_t
 * Description: The aim is to free (dog)
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
