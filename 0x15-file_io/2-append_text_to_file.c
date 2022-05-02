#include "main.h"
/**
 *append_text_to_file - appends a text to a file
 *@filename: file to be worked
 *@text_content: text to be appended
 *
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, fd, w;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR);
		if (fd < 0)
			return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		w = write(fd, text_content, len);
		if (w < len)
			return (-1);
	}
	return (1);
}
