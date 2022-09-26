#include "main.h"

/**
 * *_memset - fills the first n bytes of memory
 * area pointed to by s with constant byte b
 * @s: pointer to int n
 * @n: integer
 * @b: constant that fills n bytes
 *
 * Return: pointerto the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + 1) = b;
	}
	return (s);
}
