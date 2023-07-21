#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print largest prime factor.
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long d = 2;

	while (d < n)
	{
		if (n % d == 0)
		{
			n /= d;
			d = 2;
		}
		else
			d++;
	}
	printf("%lu\n", n);
	return (0);
}
