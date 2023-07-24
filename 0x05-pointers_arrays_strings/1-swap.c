#include "main.h"

/**
 * swap_int - Entry point
 *
 * Description: Swap the values of a and b.
 * @a: pointer 1 
 * @b: pointer 2
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
