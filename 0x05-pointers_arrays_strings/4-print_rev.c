#include "main.h"

/**
 * print_rev - function that prints reverse of a string
 * @s: string to be printed.
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;
	while (s[i++])
		len++;
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
