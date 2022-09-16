include "main.h"

/**
 * _isupper - function that checks for an uppercase alphabet
 * @c : character to check
 *
 * Return: 1 if uppercase
 * otherwise, return 0
 */
int _isupper(int c);
{
	if ((c >= 'A') && (c <= 'Z))
		return (1);
	else
		return (0);
}
