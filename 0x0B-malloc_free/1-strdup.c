#include "main.h"

/**
 * _strdup - returns a pointer to newly allocated space in memory
 * @str: pointer to a string
 *
 * Return: Pointer to newly allocated space on success.
 * Otherwise NULL if string is NULL.
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	i++;
	ptr = malloc(i * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);
}
