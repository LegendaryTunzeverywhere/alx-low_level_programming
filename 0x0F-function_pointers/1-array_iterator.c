#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry point
 * @array: pointer to the array
 * @size: number elements in array
 * @action: pointer to function
 *
 * Description: executes a function on an array.
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
