#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int c;

	c = 0;
	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++
	}
	for (c--; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');
}
