#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - print type in correspondece with
 * print function
 * @q: print type
 * @f: print function
 */
typedef struct print
{
	char *q;
	void (*f)(va_list);
} print_q;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTION_H */
