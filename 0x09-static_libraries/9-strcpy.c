#include "main.h"

/**
 * *_strcpy - function for copying string pointed to by src
 * @dest: destination of the copied pointed string
 * @src: source of the pointed string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	l = 0;
	while (src[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
