#include "main.h"

/**
 * print_rev - function that prints reverse of a string
 * @s: string to be printed.
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len, i, j;

	i = 0;
	while (s[i] != '0')
	{
		i++;
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
