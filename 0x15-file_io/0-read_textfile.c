#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters printed, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, j;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	i = read(fd, buff, letters);
	if (i < 0)
	{
		free(buff);
		return (0);
	}
	buff[i] = '\0';
	close(fd);

	j = write(STDOUT_FILENO, buff, i);
	if (j < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (j);
}
