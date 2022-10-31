#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip,
 * in order to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, num = 0;
	unsigned long int diff, check = 1;

	diff = n ^ m;
	i = 0;
	while (i < (sizeof(unsigned long int) * 8))
	{
		if (check == (diff & check))
			num++;
		check <<= 1;
		i++;
	}
	return (num);
}
