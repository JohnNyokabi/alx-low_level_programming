#include "main.h"

/**
 * _puts - function for printing a string
 * @s: String to be printed
 *
 * Return: void
 */
void _puts(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}
