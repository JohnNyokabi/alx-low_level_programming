#include "main.h"

/**
 * _strspn - funtion that gets the length of a prefix substring
 * @s: segment to return bytes froms
 * @accept: bytes pointed
 *
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int k;

	for (i = 0; S[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					k++;
			}
		}
		else
			return (k);
	}
	return (k);
}
