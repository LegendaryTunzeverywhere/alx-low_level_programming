#include "main.h"

/**
 * print_number - Entry point
 * Description: prints an integger.
 * @n: number to be printed.
 * Return: 0
 */
void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double i = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (i <= positive)
			i *= 10;
		tens = i / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
