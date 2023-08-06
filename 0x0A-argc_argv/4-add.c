#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * num - Entry point
 * @argvv: argument vector
 * Description: check each argv to test if number by iterating.
 *
 * Return: true if number, false if not
 */
bool num(char *argvv)
{
	int b;

	for (b = 0; argvv[b]; b++)
	{
		if (!(agvv[b] >= '0' && argvv[b] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Description: print sum if all arguments are numbers.
 * Return: 0 (Success), 1 if an argumen isn't a number.
 */
int main(int argc, char *argv[])
{
	int a = 1;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (a < argc)
	{
		if (num(argv[a]))
			sum += atoi(argv[a]);
		else
		{
			printf("Error\n");
			return (1);
		}
		a++;
	}
	printf("%d\n", sum);

	return (0);
}
