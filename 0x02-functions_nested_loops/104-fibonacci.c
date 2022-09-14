#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the 1st 98 fibonacchi numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int q0 = 0;
	unsigned long int q1 = 1, s;

	for (i = 1; i < 98; i++)
	{
		s = q0 + q1;
		if (i != 98)
		{
			printf("%lu, ", s);
		}
		else
		{
			printf("%lu\n", s);
		}
		q0 = q1;
		q1 = s;
	}
	return (0);
}
