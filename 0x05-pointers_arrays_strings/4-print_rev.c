#include "main.h"

/**
 * print_rev - function that prints reverse of a string
 * @s: string to be printed.
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int j;

	j = 0;
	while (j >= 0)
	{
		if (s[j] == '\0')
			break;
		j++;
	}
	for (j--; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
