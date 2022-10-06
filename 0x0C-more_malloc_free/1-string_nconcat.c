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
	char *c;

	i = 0;
	j = 0;
	l1 = 0;
	l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;
	if (n < l2)
		c = malloc((l1 + n + 1) * sizeof(char));
	else
		c = malloc((l1 + l2 + 1) * sizeof(char));
	if (!c)
		return (NULL);
	if (i < l1)
	{
		c[i] = s1[i];
		i++;
	}
	while ((n < l2) && (i < (l1 + n)))
		c[i++] = s2[j++];
	while ((n >= l2) && (i < (l1 + l2)))
		c[i++] = s2[j++];
	c[i] = '\0';
	return (c);
}
