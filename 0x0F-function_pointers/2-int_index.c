#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Entry point
 * @array: pointer to int
 * @size: number pf elements in array
 * @cmp: pointer to the function
 *
 * Description: searches an integer
 * Return: first element of the index, on Success
 * or return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
