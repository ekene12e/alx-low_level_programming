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
	ssize_t fd, read_bytes, written_bytes;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	lseek(fd, 0, SEEK_SET);
	buff = malloc(letters * sizeof(char));
	read_bytes = read(fd, buff, letters);
	close(fd);
	if (read_bytes < 0)
	{
		free(buff);
		return (0);
	}
	written_bytes = write(STDOUT_FILENO, buff, read_bytes);
	if (written_bytes < 0 || written_bytes < read_bytes)
	{
		return (0);
		free(buff);
	}
	return (written_bytes);
	free(buff);
}
