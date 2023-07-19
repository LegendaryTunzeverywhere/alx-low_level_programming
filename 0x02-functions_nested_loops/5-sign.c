#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: check if sign or number.
 * @n: parameter - variable.
 *
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}

	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}

	else
	{
		return (-1);
		_putchar('-');
	}
	_putchar('\n');
}
