#include "main.h"

/**
 * _strlen - function that finds string length
 * @s: String
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s[i] != '\0')
		i++;
	return (i);
}
