#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: print the last digit of a number.
 * @r: parameter.
 *
 * Return: Always 0
 */
int print_last_digit(int r)
{
	int ld = r % 10;

	if (ld < 0)
	{
		_putchar(-ld + '0');
		return (-ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
	_putchar('\n');
	return (0);
}
