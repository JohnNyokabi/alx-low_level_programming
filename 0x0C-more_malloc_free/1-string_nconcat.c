#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to copy
 *
 * Return: pointer to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1, l2;
	unsigned int k = n;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	if (k >= l2)
	{
		k = l2;
		c = malloc((l1 + l2 + 1) * sizeof(char));
	}
	else
		c = malloc((l1 + n + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	i = 0;
	while (i < l1)
	{
		c[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < k)
	{
		c[j] = s2[j];
		j++;
	}
	c[j] = '\0';
	return (c);
}
