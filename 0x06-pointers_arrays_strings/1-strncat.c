#include "main.h"

/**
 * *_strncat - function that appends src pointed string to dest pointed string
 * @dest: pointer to destination array
 * @src: String to be appended
 * @n: Maximum number of characters to be appended
 *
 * Return: Pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
