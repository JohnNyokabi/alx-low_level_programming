#include "main.h"

/**
 * _isdigit - checks if string contains non-digit characters
 * @str: string to check
 *
 * Return: 0 if a non-digit, otherwise return 1
 */
int _isdigit(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - computes the length of a string
 * @s: string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
		i++;
	return (i);
}

/**
 * error - takes care of errors for main
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies 2 poitive numbers
 * @argc: count of arguments
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	char *str1, *str2;
	int l1, l2, l, i, c, num1, num2, *res,x = 0;

	str1 = argv[1];
	str2 = argv[2];
	if (argc != 3 || !_isdigit(str1) || !_isdigit(str2))
		error();
	l1 = _strlen(str1);
	l2 = _strlen(str2);
	l = l1 + l2 + 1;
	res = malloc(l * sizeof(int));
	if (!res)
		return (1);
	i = 0;
	while (i <= l1 + l2)
	{
		res[i] = 0;
		i++;
	}
	l1 = l1 -1;
	while (l1 >= 0)
	{
		num1 = str1[l1] - '0';
		c = 0;
		for (l2 = _strlen(str2) - 1; l2 >= 0; l2--)
		{
			num2 = str2[l2] - '0';
			c += res[l1 + l2 + 1] + (num1 * num2);
			res[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			res[l1 + l2 + 1] += c;
		l1--;
	}
	i = 0;
	while (i < l - 1)
	{
		if (res[i])
			x = 1;
		if (x)
			_putchar(res[i] + '0');
		i++;
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
