#include <stdio.h>
#include "main.h"

/**
 * print_diagsum - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: pointer to the start matrix
 * @size: size of the array
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum_x, sum_y;

	i = 0;
	j = size - 1;
	sum_x = 0;
	sum_y = 0;

	while (i <= (size * size))
	{
		sum_x = sum_x + a[i];
		i = i + size + 1;
	}
	while (j < (size * size - 1))
	{
		sum_y += a[j];
		j = j + size - 1;
	}
	printf("%d, %d\n", sum_x, sum_y);
}
