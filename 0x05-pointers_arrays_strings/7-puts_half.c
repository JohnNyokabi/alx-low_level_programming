#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j, n;

	i = 0;
	j = 0;
	while (str[i++])
		j++;
	if ((j % 2) == 0)
		n = j / 2;
	else
		n = (j + 1) / 2;
	for (i = n; i < j; i++)
		_putchar(str[i]);
	_putchar('\n');
}
