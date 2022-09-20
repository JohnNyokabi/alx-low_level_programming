#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints an array
 * @a: variable for the array
 * @n: number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
