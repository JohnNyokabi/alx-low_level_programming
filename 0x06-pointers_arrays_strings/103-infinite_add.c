#include "main.h"

/**
 * *infinite_add - function that adds 2 numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store results
 * @size_r: size of the buffer
 *
 * Return: pointer to dest
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int indx1 = 0, indx2 = 0, p, b, d1, d2, sum = 0;

	while (*(n1 + indx1) != '\0')
		indx1++;
	while (*(n2 + indx2) != '\0')
		indx2++;
	if (indx1 >= indx2)
		b = indx1;
	else
		b = indx2;
	if (size_r <= b + 1)
		return (0);
	r[b + 1] = '\0';
	indx1--, indx2--, size_r--;
	d1 = *(n1 + indx1) - 48, d2 = *(n2 + indx2) - 48;
	while (b >= 0)
	{
		p = d1 + d2 + sum;
		if (p >= 10)
			sum = p / 10;
		else
			sum = 0;
		if (p > 0)
			*(r + b) = (p % 10) + 48;
		else
			*(r + b) = '0';
		if (indx1 > 0)
			indx1--, d1 = *(n1 + indx1) - 48;
		else
			d1 = 0;
		if (indx2 > 0)
			indx2--, d2 = *(n2 + indx2) - 48;
		else
			d2 = 0;
		b--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
