#include "main.h"

/**
 * clear_bit - Entry point
 * @n: number of bit to be cleared
 * @index: set the value of bit.
 *
 * Description: sets the value of bit to 0 to be cleared.
 * Return: 1 if success, -1 if error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = ~(1 << index);
	*n = *n & a;
	return (1);
}
