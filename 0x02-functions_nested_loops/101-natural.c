#include <stdio.h>
#include <stdlib.h>

/**
 * main - list all multiples of 3 0r 5 for numbers below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (1 % 5) == 0)
			sum += 1;
	}
	printf("%d\n", sum);
	return (0);
}
