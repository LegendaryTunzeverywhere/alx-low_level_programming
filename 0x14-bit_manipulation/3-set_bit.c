#include "main.h"

/**
 * set_bit - Entry point
 * @n: number of index to set
 * @index: starts from 0.
 *
 * Description: sets the value of a bit to 1 at a given index.
 * Return: 1 if success, -1 if error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	*n = *n | a;
	return (1);
}
