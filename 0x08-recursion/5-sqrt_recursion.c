#include "main.h"

/**
 * get_root - Entry point
 * @n: num
 * @root: test this root first.
 * Return: natural square root.
 */
int get_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (get_root(n, root + 1));
}

/**
 * _sqrt_recursion - Entry point
 * @n: input
 *
 * Description: returns the natural square root of a num.
 * Return: square root of n, otherwise -1 if n does not
 * have a square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (get_root(n, 0));
}
