#include "main.h"

/**
 * _strpbrk - searches a string for set o bytes
 * @s: string to search through
 * @accept: string to search against
 *
 * Return: pointer to byte in s if it matches, or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
