#include "main."

/**
 * get_bit - Entry point
 * @n: bits
 * @index: index starting from 0.
 *
 * Description: returns the value of a bit given by index.
 * Return: the value of the bit at index, or -1  if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		rturn (-1);
	a = 1 << index;
	b = n & a;
	if (b == a)
		return (1);
	return (0);
}
