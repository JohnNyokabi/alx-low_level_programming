#include "main.h"

/**
 * print_number - prints integers
 * @n: Integer to be printed out
 *
 * Return: nothing
 */
void print_number(int n)
{
	unisgned int num = n;

	if (n < 0)
	{
		-putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_num(num / 10);
	_putchar((num % 10) + '0');
}
