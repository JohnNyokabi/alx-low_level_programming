#include "main.h"

/**
 * _puts - function for printing a string
 * @str: String to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++
	}
	_putchar('\n');
}
