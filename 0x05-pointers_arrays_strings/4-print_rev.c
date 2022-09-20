#include "main.h"

/**
 * print_rev - function that prints reverse of a string
 * @s: string to be printed.
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int c;

	c = 0;
	while (*(s + 1))
		c++;

	c = c - 1;
	while (c >= 0)
	{
		_putchar(*(s + 1));
		c--;
	}
	_putchar('\n');
}
