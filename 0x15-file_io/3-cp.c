#include "main.h"
/**
 *read_from_into - reads to the content
 *of one file and writes into another file
 *
 *@file_from: file to be written from
 *@file_to: File to be written to
 *
 * Author: Ekene Ezema
 */
void read_from_into(const char *file_from, const char *file_to)
{
	int fd, r, w, c;
	char *buff[1024];

	fd = open(file_from, O_RDWR);
	r = read(fd, buff, 1024);
		if (fd < 0 || r < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		c = close(fd);
		if (c < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
		fd = open(file_to, O_CREAT | O_RDWR | O_APPEND | O_TRUNC, 0664);
		w = write(fd, buff, 1024);
		if (fd < 0 || w < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
		}
		c = close(fd);
		if (c < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
}
/**
 *main - tests the function
 *@ac: number of command line arguments
 *@av: command line arguments
 *
 *Return: zero always
 *Author: Ekene Ezema
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	read_from_into(av[1], av[2]);
	return (0);
}
