#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints reverse of a string
 * @s: string to be printed.
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int c, length;
	char *begin, *end, temp;

	length = string_length(s);
	begin = s;
	s = end;

	for (c = 0; c < length - 1; c++)
	       end++;
	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
