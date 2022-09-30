#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of coins to make change
 * @argc: number of arguments
 * @argv: array of the arguments
 *
 * Return: 0 on success, otherwise 1
 */
int main(int argc, char *argv[])
{
	int cents[5] = {25, 10, 5, 2, 1};
	int x, y = 0, i, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x <= 0)
	{
		printf("0");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			j = x / cents[i];
			x -= j * cents[i];
			y += j;
			if (x == 0)
				break;
		}
	}
	printf("%d\n", y);
	return (0);
}
