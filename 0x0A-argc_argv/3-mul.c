#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: arguments counter
 * @argv: numbers to multiply
 * Description: prints the product of argument numbers.
 *
 * Return: 0 on success, 1 at error.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
