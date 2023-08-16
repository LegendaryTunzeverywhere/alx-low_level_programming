#include "3-calc.h"

/**
 * op_add - Entry point
 * @a: integer to add to another
 * @b: integer to add to another
 *
 * Description: returns sum of a and b.
 * Return: sum of the two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Entry point
 * @a: first number
 * @b: second number
 *
 * Description: returns the differences between a and b.
 * Return: differences between two integers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Entry point
 * @a: first integer
 * @b: second integer
 *
 * Description: returns the product of a and b.
 * Return: product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Entry point
 * @a: first integer
 * @b: second integer
 *
 * Description: returns the division of a by b.
 * Return: result of division.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Entry point
 * @a: first integer
 * @b: second integer
 *
 * Description: returns the remainder of two integers
 * after division,
 * Return: result in remainder after division.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
