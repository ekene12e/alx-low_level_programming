#include "main.h"
/**
 *create_file - creates a file
 *@filename: name of file to be created
 *@text_content
 *
 * Author: EKene Ezema
 */
int create_file(const char *filename, char *text_content)
{
	long unsigned int file_descriptor, written_bytes;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDONLY | O_TRUNC, 0600);
	if (text_content)
		{
		lseek(file_descriptor, 0, SEEK_SET);
		written_bytes = write(file_descriptor, text_content, sizeof(text_content));
		}
	if (written_bytes < sizeof(text_content))
	{
	return (-1);
	}

	close(file_descriptor);
	return (1);
}
