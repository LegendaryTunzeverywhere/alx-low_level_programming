#include <stdio.h>

/**
 * print_array - Entry point
 *
 * Description: prints n elements.
 * @a: array
 * @n: numbers of elements
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n -1))
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
