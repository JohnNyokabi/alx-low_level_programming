#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int low;

	for (low = 'a'; low <= 'z'; ++low)
		putchar(low);
	putchar('\n');
	return (0);
}
