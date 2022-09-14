#include "main.h"

/**
 * times_table - function that prints 9 times table
 * x = row, y = column, z = product
 * return always 0
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
			{
				_putchar('0');
			}
			else if (z >= 10)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else if ((z < 10) && (y != 0))
			{
				_putchar(' ');
				_putchar((z % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
