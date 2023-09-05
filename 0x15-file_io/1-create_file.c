#include "main.h"

/**
 * create_file - The creat a files
 * @filename: A name of the file to creat and text_contect
 * @text_content: If a file is full terminated string to writebto the file
 *
 * Return: 1 on success,-1 on failure if file not creat write fails
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
