#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers with commas, using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	
	return (0);
}
