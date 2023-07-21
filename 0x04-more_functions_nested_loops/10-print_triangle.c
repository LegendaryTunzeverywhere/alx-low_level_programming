#include "main.h"

/**
 * print_triangle - Entry point
 * Description: prints a triangle followed by a new line.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int h;
	int w;
	int d;

	if (size <= 0)
		_putchar('\n');

	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= (size - h); w++)
			_putchar(' ');
		for (d = 1; d <= h; d++)
			_putchar('#');

		_putchar('\n');
	}
}
