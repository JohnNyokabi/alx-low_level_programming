#include "main.h"

/**
 * prime_confirm - checks if a number is prime
 * @x: factor verifier
 * @y: possible prime value
 *
 * Return: if prime 1, otherwise 0
 */
int prime_confirm(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (prime_confirm(x + 1, y));
}
/**
 * is_prime_number - checks if the input is a prime number
 * @n: variable to check
 *
 * Return: if prime 1, otherwise returns 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_confirm(2, n));
}
