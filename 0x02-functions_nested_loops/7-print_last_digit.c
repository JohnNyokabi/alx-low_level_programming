#include "main.h"

/**
 * print_last_digit - function that displays last digit only
 * @n: the value to be printed
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
