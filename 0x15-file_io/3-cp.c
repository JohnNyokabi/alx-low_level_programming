#include "main.h"

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, rd, i, j;
	char buff[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	       exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(fd_r, buff, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || write(fd_w, buff, rd) != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = close(fd_r);
	j = close(fd_w);
	if (i < 0 || j < 0)
	{
		if (i < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Cant't close fd %d\n",fd_w);
		exit(100);
	}
	return (0);
}
