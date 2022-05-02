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
	int file_descriptor;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR, 0600);
	if (text_content)
		{
		lseek(file_descriptor, 0, SEEK_SET);
		write(file_descriptor, text_content, sizeof(text_content));
		}
	close(file_descriptor);
	return (1);
}
