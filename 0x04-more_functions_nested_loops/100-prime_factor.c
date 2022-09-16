#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 *
 * Return: Always 0
 */
int main(void)
{
	long int n, div = 2, maxf;

	n = 612852475143;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxf = n;
			n = n / div;
			if (n == 1)
			{
				printf("%ld\n", maxf);
				break;
			}
		}
	}
	return (0);
}
