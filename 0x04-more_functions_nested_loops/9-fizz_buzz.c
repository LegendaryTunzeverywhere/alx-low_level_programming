#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print fizz at 3, buzz at 5, when 3 x 5, print fizzbuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	
	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);

		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
