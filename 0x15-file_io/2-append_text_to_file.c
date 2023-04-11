#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file
 *
 * Return: if the function fails or filename is NULL -- 1
 * if the file does not exist or the user lacks write permissions -- 1
 * otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) == -1 || access(filename, W_OK) == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	close(fd);

	return (1);
}
