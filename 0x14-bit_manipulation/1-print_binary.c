#include "main.h"

/**
 * print_binary - prints binary equivalent of a decimal number
 * @n: number to print into binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int c;

	j = 0;
	i = 63;
	while (i >= 0)
	{
		c = n >> i;

		if (c & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
		i--;
	}
	if (!j)
		_putchar('0');
}
