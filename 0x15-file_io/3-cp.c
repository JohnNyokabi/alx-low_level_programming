#include "main.h"

/**
 * check_code97 - checks for the correct number of arguments
 * @argc: count of arguments
 *
 * Return: nothing
 */
void check_code97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_code98 - checks the existence of file_from and can be read
 * @check: confirms whether true or false
 * @file: file_from name
 * @fd_from: file_from file descriptor or -1
 * @fd_to: file_to file descriptor or -1
 *
 * Return: nothing
 */
void check_code98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check_code99 - checks if file_to has been created
 * and can be written into
 * @check: confirms whether true or false
 * @file: file_to name
 * @fd_from: file_from file descriptor or -1
 * @fd_to: file_to file descriptor or -1
 *
 * Return: nothing
 */
void check_code99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check_code100 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void check_code100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, term_to, term_from;
	ssize_t len_rd, len_wr;
	char buffer[1024];
	mode_t file_perm;

	check_code97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check_code98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check_code99((ssize_t)fd_to, argv[2], fd_from, -1);
	len_rd = 1024;
	while (len_rd == 1024)
	{
		len_rd = read(fd_from, buffer, 1024);
		check_code98(len_rd, argv[1], fd_from, fd_to);
		len_wr = write(fd_to, buffer, len_rd);
		if (len_wr != len_rd)
			len_wr = -1;
		check_code99(len_wr, argv[2], fd_from, fd_to);
	}
	term_to = close(fd_to);
	term_from = close(fd_from);
	check_code100(term_to, fd_to);
	check_code100(term_from, fd_from);
	return (0);
}
