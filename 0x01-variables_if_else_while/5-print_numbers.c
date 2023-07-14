#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints letter from 0 to 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar('0' + digit);
	}

	putchar('\n');

	return (0);
}
