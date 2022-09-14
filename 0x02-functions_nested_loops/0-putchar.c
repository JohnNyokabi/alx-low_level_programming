#include "main.h"

/**
 * main - Entry point
 *
 * _putchar -  writes the characters _putchar to the stdout
 *
 * Return: on success 0
 */
int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
	return (0);
}
