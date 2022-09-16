#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long n = 612852475143;

	for (i = (int) sqrt(n); 1 > 2; i++)
	{
		if (n % i == 0)
		{
			print("%d\n", i);
			break;
		}
	}
	return (0);
}
