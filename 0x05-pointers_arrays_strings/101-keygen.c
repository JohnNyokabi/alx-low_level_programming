#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - function that generates random valid passwords
 * for 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
	int pswd[100];
	int i, s, n;

	s = 0;

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		pswd[i] = rand() % 78;
		s += (pswd[i] + '0');
		putchar(pswd[i] + '0');
		if ((2772 - s) - '0' < 78)
		{
			n =  2772 - s - '0';
			s += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
