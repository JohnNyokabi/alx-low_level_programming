#include "main.h"

/**
 * *_strcat - concatenates 2 strings by appending src to dest.
 * @dest: destination string
 * @src: string to be appended to dest
 *
 * Return: Resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++);
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
