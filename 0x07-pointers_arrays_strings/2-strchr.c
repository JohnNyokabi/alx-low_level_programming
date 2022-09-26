#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: pointer to the string
 * @c: character to locate
 *
 * Return: pointer to first occurence of character c in string s.
 * Or NULL if c notfound.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
