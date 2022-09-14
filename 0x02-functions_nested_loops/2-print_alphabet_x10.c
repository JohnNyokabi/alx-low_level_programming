#include "main.h"

/**
 * print_alphabet_x10 - function that prints alphabets 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int ch;
	int i;

	i = 0;
	while (i <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		i++;
		_putchar('\n');
	}
}
