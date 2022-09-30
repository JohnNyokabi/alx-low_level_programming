#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of argumrnts
 * @argv: array of arguments
 *
 * Return: 0 on success, otherwise return 1 on error
 */
int main(int argc, char *argv[])
{
	int n = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		n += atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
