#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: a pointer to a string to write to the file
 *
 * Return: on success 1, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, len;

	len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}
	i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	j = write(i, text_content, len);

	if (i == -1 || j == -1)
		return (-1);
	close(i);
	return (1);
}
