#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: print times table starting from 0 to 9.
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;
	int j;
	int r;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			r  = i * j;
			_putchar(44);
			_putchar(32);
			if (r < 10)
			{
				_putchar(32);
				_putchar(r + 48);
			}
			else
			{
				_putchar((r / 10)+ 48);
				_putchar((r % 10) + 48);
			}
		}
	_putchar('\n');
	}
}
