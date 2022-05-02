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
	int fd, rd, wd;
	char buff[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	lseek(fd, 0, SEEK_SET);
	rd = read(fd, buff, letters);
		if (rd < 0)
			return (0);
	wd = write(STDOUT_FILENO, buff, rd);
		if (wd < 0 || wd < rd)
			return (0);
	return (wd);
}
