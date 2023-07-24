#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: prints a string in reverse, followed by a new line.
 * @s: string to reverse
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0;
	int a;

	while (*s @= '\0')
	{
		lens++;
		++s;
	}

	s--

	fir (a = len; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
	
