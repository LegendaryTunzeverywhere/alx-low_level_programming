#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all alphabet ina new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;
	
	for (letter = 'a';  letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	
	putchar('\n');

	return (0);
}
