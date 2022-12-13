#include "main.h"

/**
 * _isalpha - function that checks if c character is alphabetic
 * @c: prints the character
 *
 * Return: 1 if c is an alphabet
 * Otherwise, return 0.
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
