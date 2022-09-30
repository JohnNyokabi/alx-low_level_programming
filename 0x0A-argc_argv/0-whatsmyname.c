#include <string.h>
#include <stdio.h>

/**
 * main - prints the name of the program followed by new line.
 * @argc: number of arguments
 * @argv: array of arguements in argc
 *
 * Return: name of the program
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
