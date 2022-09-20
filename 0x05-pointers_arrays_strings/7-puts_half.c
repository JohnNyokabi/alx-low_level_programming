#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string to be printed
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (*(str + 1))
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
