#include "main.h"
#include <string.h>

/**
 * _puts - function for printing a string
 * @str: String to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	if (*str == '\0')
		return;
	_putchar("%s", *str);
	_putchar('\n');
	_puts(++str);
}
