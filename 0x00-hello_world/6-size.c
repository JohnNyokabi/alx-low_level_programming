#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("char size: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("int size: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("long int size: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("long long int size: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("float size: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);

}
