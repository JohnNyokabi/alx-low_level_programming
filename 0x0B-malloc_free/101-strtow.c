#include "main.h"

/**
 * word_count - helps count the number of words in a string
 * @c: pointer to the string
 *
 * Return: number of words counted
 */
int word_count(char *c)
{
	int i, j = 0;

	for (i = 0; c[i]; i++)
	{
		if (c[i] == ' ')
		{
			if (c[i + 1] != ' ' && c[i + 1] != '\0')
				j++;
		}
	}
	j++;
	return (j);
}
/**
 * strtow - splits a string into words
 * @str: pointer to the string to spit
 *
 * Return: pointer to an array of string on success
 * Otherwise, return NULL
 */
char **strtow(char *str)
{
	int i, j, k, len, n = 0, w = 0;
	char **a;

	if (*str == '\0' || str == NULL)
		return (NULL);
	n = word_count(str);
	if (n == 1)
		return (NULL);
	a = (char **)malloc(n * sizeof(char *));
	if (a == NULL)
		return (NULL);
	a[n - 1] = NULL;
		i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			a[w] = (char *)malloc(j * sizeof(char));
			j--;
			if (a[w] == NULL)
			{
				for (k = 0; k < w; k++)
					free(a[k]);
				free(a[n - 1]);
				free(a);
				return (NULL);
			}
			for (len = 0; len < j; len++)
				a[w][len] = str[i + len];
			a[w][len] = '\0';
			w++;
			i += j;
		}
		else
			i++;
	}
	return (a);
}
