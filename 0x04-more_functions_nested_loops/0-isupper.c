include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: input
 *
 * Return: 1 if c is uppercase.
 * Otherwis,e return 0.
 */
int _isupper(int c);
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
