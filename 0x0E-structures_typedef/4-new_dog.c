#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Entry point
 * @name: pointer for name of dog
 * @age: age of dog
 * @owner: pointer to owner of dog
 *
 * Description: creates a new dog.
 * Return: pointer to a new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nLen, ownLen, a; 
	dog_t *dnew;

	dnew = (dog_t *)malloc(sizeof(dog_t));
	if (dnew == NULL)
		return (NULL);
	nLen = ownLen = 0;
	while (name[nLen++])
		;
	while (owner[ownLen++])
		;
	dnew->name = malloc(nLen * sizeof(dnew->name));
	if (dnew->name == NULL)
	{
		free(dnew);
		return (NULL);
	}
	for (a = 0; a <= nLen; a++)
		dnew->name[a] = name[a];
	dnew->age = age;
	dnew->owner = malloc(ownLen * sizeof(dnew->owner));
	if (dnew->owner == NULL)
	{
		free(dnew->name);
		free(dnew);
		return (NULL);
	}
	for (a = 0; a <= ownLen; a++)
		dnew->owner[a] = owner[a];
	return (dnew);
}
