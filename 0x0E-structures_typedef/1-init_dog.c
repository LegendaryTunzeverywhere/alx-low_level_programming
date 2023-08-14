#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Entry point
 * @d: a pointer
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 * Description: Initialize a variable of type struct dog.
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float agge, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
