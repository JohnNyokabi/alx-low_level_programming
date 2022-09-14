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
	unsigned long int q0 = 0, q1 = 1, s;
	unsigned long int q0_half0, q0_half1, q1_half0, q1_half1;
	unsigned long int half0, half1;

	for (i = 1; i < 98; i++)
	{
		s = q0 + q1;
		printf("%lu, ", s);
		q0 = q1;
		q1 = s;
	}
	q0_half0 = q0 / 10000000000;
	q1_half0 = q1 / 10000000000;
	q0_half1 = q0 % 10000000000;
	q1_half1 = q1 % 10000000000;
	for (i = 93; i < 99; i++)
	{
		half0 = q0_half0 + q1_half0;
		half1 = q0_half1 + q1_half1;
		if (q0_half1 + q1_half1 > 9999999999)
		{
			half0 += 1;
			half1 %= 10000000000;
		}
		printf("%lu%lu", half0, half1);
		if (i != 98)
			printf(", ");
		q0_half0 = q1_half0;
		q0_half1 = q1_half1;
		q1_half0 = half0;
		q1_half1 = half1;
	}
	printf("\n");
	return (0);
}
