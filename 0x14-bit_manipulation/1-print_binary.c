#include "main.h"

/**
 * _expon - Entry point
 * @base: base 2 to be converted.
 * @power: number of exponent
 *
 * Description: calculate base raise to power.
 * Return: value of the equation.
 */
unsigned long int _expon(unsigned int base, unsigned int power)
{
	unsigned long int i;
	unsigned int num;

	i = 1;
	for (num = 1; num <= power; ++num)
		i *= base;
	return (i);
}

/**
 * print_binary - Entry point
 * @n: number to print as a binary.
 *
 * Description: prints the representation of a number.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int a, b;
	char d;

	d = 0;
	a = _expon(2, sizeof(unsigned long int) * 8 - 1);
	while (a != 0)
	{
		b = n & a;
		if (b == a)
		{
			 d = 1;
			 _putchar('1');
		}
		else if (d == 1 || a == 1)
		{
			_putchar ('0');
		}
		a >>= 1;
	}
}
