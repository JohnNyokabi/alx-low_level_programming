#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: numbers of arguments in the function
 * @argv: Array of arguments in argc
 *
 * Return: Number of arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc--);
	return (0);
}
