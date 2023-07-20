#include "main.h"

/**
 * more_numbers - Entry point
 * Description: prints numbers 0 to 14 ten times.
 * Return: Always 0
 */
void more_numbers(void)
{
	char i;
	int c; /*counter*/

	for (c = 1; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
