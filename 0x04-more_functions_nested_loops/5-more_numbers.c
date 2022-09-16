#include "main.h"

/**
 * more_numbers - function that prints 0-14 ten times
 *
 * Return: Alwys 0
 */
void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		for (j = 0; j <=14; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
