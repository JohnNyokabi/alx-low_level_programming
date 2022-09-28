#include "main.h"

/**
 * _strlen - checks the length of the string
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * check_palind - checks if a string is palindrome
 * @a: left hand index
 * @b: right hand index
 * @c: possible palindrome
 *
 * Return: if palindrome 1, otherwise 0
 */
int check_palind(int a, int b, char *c)
{
	if (a >= b)
		return (1);
	else if (c[a] != c[b])
		return (0);
	else
		return (check_palind(a + 1, b - 1, c));
}

/**
 * is_palindrome - states if a string is palindrome
 * @s: string to check
 *
 * Return: if palindrome 1, if not 0
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palind(0, i, s));
}
