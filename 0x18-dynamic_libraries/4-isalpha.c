#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry point
 *
 * Description: check if it is an alphabet
 * @c: pararmeter - variable.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
