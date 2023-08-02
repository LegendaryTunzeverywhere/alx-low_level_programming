#include "main.h"

/**
 * factorial - Entry point
 * @n: integer to check
 *
 * Description: check if the next number is possible to be a factorial
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
