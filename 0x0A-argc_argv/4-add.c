#include <stdio.h>
#include <stdlib.h>
#include <sring.h>

/**
 * num - Entry point
 * @x: char to test
 * Description: check each argv to test if number by iterating.
 *
 * Return: 1 if number, 0 if not
 */
int num(char *x)
{
	int a, b, len;

	a = 0;
	b = 0;
	len = strlen(x);
	while (a < len)
	{
		if (x[a] < '0' || x[a] > '9')
		{
			return (-1);
		}
		else
			b = b * 10 + (x[a] - '0');
		a++;
	}
	return (b);
}
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 * Description: print sum if all arguments are numbers.
 * Return: 0 (Success), 1 if an argumen isn't a number.
 */
int main(int argc, char *argv[])
{
	int a, b, add;

	add = 0;
	for (a = 1; a < argc; a++)
	{
		b = num(argv[a]);
		if (b == -1)
		{
			printf("Error\n");
			return (1);
		}
		add += b;
	}
	printf("%d\n", add);

	return (0);
}
