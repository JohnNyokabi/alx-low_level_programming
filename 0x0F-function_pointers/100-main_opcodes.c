#include "3-calc.h"

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	int (*a)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error1\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)a;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");
		a++;
	}
	printf("\n");
	return (0);
}
