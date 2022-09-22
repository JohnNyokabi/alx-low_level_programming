#include "main.h"

/**
 * *cap_string - function for capitalizing words of a string
 * @s: string being capitalized
 *
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i, j;

	char ch[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		for (j = 0; j < 13; j++)
		{
			if (s[i] == ch[j])
			{
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
