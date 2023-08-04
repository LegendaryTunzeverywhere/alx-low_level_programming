#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: Prints absolute number of an integer.
 * @n: Parameter - variable.
 *
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}

	else
	{
		return (-n);
	}
	_putchar('\n');
}
