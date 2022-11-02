#include "main.h"

/**
 * _strlen - computes the length of a string
 * @s: pointer to the string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (len);
}

/**
 * append_text_to_file - appends text only if the file exists
 * @filename: pointer to the file
 * @text_content: appends contents to the file
 *
 * Return: on success 1, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	n = write(fd, text_content, _strlen(text_content));
	if (n == -1 || n != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
