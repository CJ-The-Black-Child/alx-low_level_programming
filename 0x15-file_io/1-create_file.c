#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file
 * @filename: A pointer to the name of the file to create
 * @text_content: a pointer to a string to write to the file.
 *
 * Return: If the function fails - -1
 * otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd,  bytes_written, len = 0;

	if (filename == NULL)

		return (-1);

			if (text_content != NULL)
			{
				while (text_content[len])
					len++;
			}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
