#include "main.h"
#include <string.h>

/**
 * _strlen - function that finds string length
 * @s: String
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen(++s));
}
