#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry lower
 *
 * Description: checks for lowercase character
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
