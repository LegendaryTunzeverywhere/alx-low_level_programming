#include "main.h"

/**
 * _puts_recursion - Entry point
 * @s: string to print
 *
 * Description: prints a string followed by a new line.
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s += 1;
	_puts_recursion(s);
}
