#include "main.h"

/**
 * print_diagonal - function for printing diagonal lines
 * @n: input value to print
 * @s: number of spaces
 *
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	int ch, s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ch = 1; ch <= n; ch++)
		{
			for (s = 1; s <= ch; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
