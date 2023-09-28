#include "main.h"

/**
 * flip_bits - Entry point
 * @n: first bit
 * @m: second bit
 *
 * Description: a function that returns the number of bits will be 
 * needing to flip to get from one another.
 *
 * Return: the number of bits when flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sub, b;
	unsigned add, a;

	add = 0;
	b = 1;
	sub = n ^ m;
	for (a = 0; a < (sizeof(unsigned long int) * 8); ++a)
	{
		if (b == (sub & b))
			++add;
		b <<= 1;
	}
	return (add);
}
