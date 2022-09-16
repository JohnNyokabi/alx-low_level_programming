#include "main.h"

/**
 * print_square - function that prints a square
 * @size: square size
 *
 * Return: square
 */
void print_square(int size)
{
	int i, j;

	j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
