#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet - prints in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
