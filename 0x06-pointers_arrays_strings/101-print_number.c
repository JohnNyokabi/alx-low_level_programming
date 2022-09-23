#include "main.h"

/**
 * print_number - prints integers
 * @n: Integer to be printed out
 *
 * Return: nothing
 */
void print_number(int n)
{
	unisgned int num1;

	if (n < 0)
	{
		-putchar('-');
		num1 = -n;
	}
	else
	{
		num1 = n;
	}
	if ((num1 / 10) > 0)
		print_num(num / 10);
	_putchar((num1 % 10) + '0');
}
