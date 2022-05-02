#include "main.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: name of file to be read
 *@letters: number of letters to be read
 *Return: Null if failure or number of letters read
 *
 * Author : Ekene Ezema
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wd;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	lseek(fd, 0, SEEK_SET);
	buff = malloc(letters * sizeof(char));
	rd = read(fd, buff, letters);
	close(fd);
	if (rd < 0)
	{
		free(buff);
		return (0);
	}
	wd = write(STDOUT_FILENO, buff, rd);
	if (wd < 0 || wd < rd)
	{
		return (0);
		free(buff);
	}
	return (wd);
	free(buff);
}
