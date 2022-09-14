#include "main.h"

/**
 * _islower - function that checks if the c character is lowercase
 * @c: character to print
 *
 * Return: 1 is c is lower
 * Otherwise, return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
