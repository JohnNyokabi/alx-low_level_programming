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
	unsigned long int i, q, s, q1, q2, s1, s2;

	q = 1;
	s = 2;
	printf("%lu", q);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", s);
		s += q;
		q = s - q;
	}
	q1 = q / 1000000000;
	q2 = q % 1000000000;
	s1 = s / 1000000000;
	s2 = s % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", s1 + (s2 / 1000000000));
		printf("%lu", s2 % 1000000000);
		s1 += q1;
		q1 = s1 - q1;
		s2 += q2;
		q2 = s2 - q2;
	}
	printf("\n");
	return (0);
}
