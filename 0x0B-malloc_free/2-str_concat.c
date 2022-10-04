#include "main.h"

/**
 * str_concat - contenates two strings
 * @s1: the first string
 * @s2: the second sting
 *
 * Return: pointer to newly allocated space in memory
 * on success, otherwise return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, x, y;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	x = i + j + 1;
	ptr = malloc(x * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < i; y++)
	{
		ptr[y] = s1[y];
	}
	for (y = 0; y < j; y++)
	{
		ptr[y + i] = s2[y];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
