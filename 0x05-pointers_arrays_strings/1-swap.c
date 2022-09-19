#include "main.h"

/**
 * swap_int - functions that swaps the value of 2 integers
 * @a: first variable
 * @b: second variable
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
