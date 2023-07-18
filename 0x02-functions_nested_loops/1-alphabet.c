#include "main.h"

/**
 * main - Entry point
 *
 * Description: i is a variable, for i is a and i is less or equal to z , print i increment
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
