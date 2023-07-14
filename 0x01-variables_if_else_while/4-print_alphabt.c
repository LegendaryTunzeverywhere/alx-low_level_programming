#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all alphabet except q and e
 *
 * Return: Aleays 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}

	putchar(letter);
	
	return (0);
}
