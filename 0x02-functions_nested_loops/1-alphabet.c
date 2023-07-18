#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints alphabets in lowercase
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
