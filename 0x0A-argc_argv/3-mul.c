#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success and 1 on error
 */
int main(int argc, char *argv[])
{
	int i, j, mul;

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = i * j;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", mul);
	return (0);
}
