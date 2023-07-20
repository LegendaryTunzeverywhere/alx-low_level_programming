#include "main.h"

/**
 * print_line - Entry point
 * Description: print the character "_" n times to draw a line.
 * @n: number of characters to draw
 */
void print_line(int n)
{
	int x = n;

	for (x = n; x > 0; x--)
		_putchar('_');

	_putchar('\n');
}
