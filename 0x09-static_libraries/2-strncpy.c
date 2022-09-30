#include "main.h"

/**
 * *_strncpy - function that copies src pointed string to dest pointed string.
 * @dest: pointer to destination array.
 * @src: string to be copied.
 * @n: number of characters to be copied.
 *
 * Return: pointer to resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
