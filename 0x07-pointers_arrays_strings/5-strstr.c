#include "main.h"

/**
 * _strstr - finds the first occurence of the substring
 * @haystack: String containing the substring
 * @needle: Substring to track
 *
 * Return: pointer to needle or Null if no track
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	while (needle[j] != '\0')
		j++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
