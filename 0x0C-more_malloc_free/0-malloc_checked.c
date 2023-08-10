#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 * @b: number of bytes to allocate.
 * Description: Function that allocates memory using malloc.
 *
 * Return: a pointer o the allocated memory.
 * if malloc fails, the function terminates the process with value 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
