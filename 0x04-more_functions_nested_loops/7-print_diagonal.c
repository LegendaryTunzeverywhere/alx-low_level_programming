#include "main.h"

/**
 * print_diagonal - Entry point
 * Description: functions that drws a diagonal line on the terminal
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int i;
	int d;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (d = 1; d < i; d++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
