#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int c, len;
	char temp;

	c = 0;
	len = 0;
	while (s[c++])
		len++;
	for (c = len - 1; c >= len / 2; c--)
	{
		temp = s[c];
		s[c] = s[len - c - 1];
		s[len - c - 1] = temp;
	}
}
