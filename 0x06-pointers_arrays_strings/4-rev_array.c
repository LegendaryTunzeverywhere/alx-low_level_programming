#include "main.h"

/**
 * reverse_array - Entry point
 *
 * Description: Reverses the contents of an integers
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int temp, b = 0;
	int c = n - 1;

	while (b < c)
	{
		temp = *(a + b);
		*(a + b) = *(a + c);
		*(a + c) = temp;
		b++;
		c--;
	}
}
