#include "main.h"

/**
 * alloc_grid - returns pointer to a 2 dimensional array of integers
 * @width: columns of the 2 dimensional array
 * @height: rows of the 2 dimensional array
 *
 * Return: pointer to 2 dimensional array on success, NULL
 * on failure and in case width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
