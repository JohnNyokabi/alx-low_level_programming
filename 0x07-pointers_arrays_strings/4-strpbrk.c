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
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			return (s + i);
	}
	return (0);
}
