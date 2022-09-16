#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: value of an integer
 *
 * Return: The value of the integer
 */
void print_number(int n)
{
	unsigned int i;

	i = n;
	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	if (i / 10)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
