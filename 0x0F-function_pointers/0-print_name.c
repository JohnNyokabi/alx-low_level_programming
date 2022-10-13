#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to the char name
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void(*f)(char *))
{
	if (!f || !name)
		return;
	f(name);
}
