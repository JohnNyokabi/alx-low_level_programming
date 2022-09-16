#include "main.h"

/**
 * print_diagonal - function for printing diagonal lines
 * @n: input value to print
 *
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	int ch, s;

	ch = 0;
	while (n > 0)
	{
		s = ch;
		while (s > 0)
		{
			_putchar(' ');
			s--;
		}
		_putchar('\\');
		_putchar('\n');
		ch++;
		n--;
	}
	if (ch < 1)
		_putchar('\n');
}
