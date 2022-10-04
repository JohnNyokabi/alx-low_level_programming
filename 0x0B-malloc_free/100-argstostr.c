#include "main.h"

/**
 * argstostr - concatenates all arguments of the program
 * @ac: number of arguments
 * @av: double pointer to array of arguments
 *
 * Return: Concatenated arguments on success,
 * NULL in case of failure, if ac is 0 or av is NULL.
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
	}
	s = malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			s[k++] = av[i][j];
		s[k++] = '\n';
	}
	s[size] = '\0';
	return (s);
}
