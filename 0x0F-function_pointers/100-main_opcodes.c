#include <stdio.h>
#include <stdlib.h>

/**
 * _opcodes - prints opcodes
 * @c: the address of main function
 * @n: number of bytes to print
 *
 * Return: nothing
 */
void _opcodes(char *c, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", c[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error1\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	_opcodes((char *)&main, i);
	return (0);
}
