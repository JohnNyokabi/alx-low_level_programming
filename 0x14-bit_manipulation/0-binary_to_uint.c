#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number,
 * otherwie 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int bin;

	bin = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		bin <<= 1;
		if (b[i] == '1')
			bin += 1;
	}
	return (bin);
}
