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
	char *ptr = dest + strlen(dest);

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
