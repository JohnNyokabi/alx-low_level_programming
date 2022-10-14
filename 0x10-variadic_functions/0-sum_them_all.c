#include "variadic_functions.h"

/**
 * sum_them_all - computes sum of all parameters
 * @n: number of arguments in the function
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list dgts;

	if (n == 0)
		return (0);
	va_start(dgts, n);
	for (i = 0; i < n; i++)
		sum += va_arg(dgts, int);
	va_end(dgts);
	return (sum);
}
