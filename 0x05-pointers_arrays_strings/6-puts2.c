#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string variable
 *
 * return: nothing
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
