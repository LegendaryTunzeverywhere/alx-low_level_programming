#include "main.h"

/**
 * print_square - Entry point
 *
 * Description: prints a sqaurae, followed by a new line.
 * @size: size to draw
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
