#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: value to raise to the power of y
 * @y: power
 *
 * Description: function that returns the value of and integer raise.
 * Return: Value of x (integer).
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
