include "main.h"

/**
 * _isupper - function that checks for an uppercase alphabet
 * @c : character to check
 *
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */
int _isupper(int c);
{
	if ((c >= 'A') && (c <= 'Z))
		return (1);
	else
		return (0);
}
