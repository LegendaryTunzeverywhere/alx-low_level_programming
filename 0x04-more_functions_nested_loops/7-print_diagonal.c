#include "main.h"

/**
 * print_diagonal - Entry point
 * Description: functions that drws a diagonal line on the terminal
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int i = n;

	for (i = n; i > 0; i--)
		_putchar('\');

	_putchar('\n');
}
