#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of coins to make change
 * @argc: number of arguments
 * @argv: array of the arguments
 *
 * Return: 0 on success, otherwise 1
 */
int main(int argc, char *argv[])
{
	int cents, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		i++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if (( cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		i--;
	}
	printf("%d\n", i);
	return (0);
}
