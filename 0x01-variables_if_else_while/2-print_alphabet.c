#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
		putchar(tolower(x)'\n');
	return (0);
}
