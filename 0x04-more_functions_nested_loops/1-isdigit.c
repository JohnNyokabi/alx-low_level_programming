#include "main.h"

/**
 * _isdigit - function that checks if character is digit
 * @c: input character
 *
 * Return: 1 if c is a digit
 * Otherwise, return 0.
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
