#include "main.h"

/**
 * _sqrt - makes it easy to evaluate from 1 to n
 * @x: has the same value as n
 * @y: Value that loops through n
 *
 * Return: on success 1, otherwise -1.
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: value to find the root of
 *
 * Return: the square root value on success
 * otherwise, -1 on error.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
