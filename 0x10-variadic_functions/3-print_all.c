#include "variadic_functions.h"

/**
 * print_c - print a char
 * @c: character to print
 *
 * Return: nothing
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: nothng
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_i - prints an integer
 * @i: integer to print
 *
 * Return: nothing
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to print
 *
 * Return: nothing
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;

	print p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list list;
	char *separator = "";

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (p[j].q != NULL)
		{
			if (*(p[j].q) == format[i])
			{
				printf("%s", separator);
				p[j].f(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
