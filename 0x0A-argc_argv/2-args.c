#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all the arguments passed
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: arguments passed
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
