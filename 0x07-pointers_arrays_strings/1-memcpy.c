#include "main.h"

/**
 * _memcpy() - copies n bytes from memory area src to memory area dest
 * @dest: destination of the pointer
 * @src: pointer to the source
 * @n: size being copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest[i]);
}
