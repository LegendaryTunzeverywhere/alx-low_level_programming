#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Print lowercase alphabet 10x
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 10;
	int w;
	int c;

	for (w = 0; w < i; w++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		
		_putchar('\n');
	}
}
