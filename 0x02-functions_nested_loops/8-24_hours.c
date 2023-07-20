#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Descrption: Print time.
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours < 24; hours++)
	for (minutes = 0; minutes < 60; minutes++)
	{
		_putchar('0' + hours / 10);
		_putchar('0' + hours % 10);
		_putchar(':');
		_putchar('0' + minutes / 10);
		_putchar('0' + minutes % 10);
		_putchar('\n');
	}
}
