#include "3-calc.h"

/**
 * op_add - computes sum of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Sum of the integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference difference between integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: product of the integers
 */
int  op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates division of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - computes the remainder after division of 2 integers
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
