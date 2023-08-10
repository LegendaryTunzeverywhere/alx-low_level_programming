#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * @min: minimum int in array
 * @max: maximum int in array
 *
 * Description: creates an array of integers from min to max.
 * Return: pointer to array or null.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < size && min <= max; a++, min++)
		*(ptr + a) = min;
	return (ptr);
}
