#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Description: source code should be able to read users argument and
 * make simple arithemetic.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ptr = get_op_func(argv[2]);

	if (ptr == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", ptr(num1, num2));

	return (0);
}
