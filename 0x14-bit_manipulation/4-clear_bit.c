#include "main.h"

/**
 * clear_bit - set the bit value at a given index to 0
 * @n: pointer to the bit
 * @index: index at which value is set
 *
 * Return: 1 on success and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
