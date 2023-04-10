#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_file_content - it reads a text file and prints it to POSIX stdout.
 * @file_path: A pointer to the name of the file.
 * @num_chars: The number of chars that functions should read and print.
 * Return: If the function fails or file_path is NULL gives 0
 * otherwise - the actual number of bytes the function can read and print
 */

ssize_t print_file_content(const char *file_path, size_t letters)
{
	ssize_t fd, bytes_read, bytes_written;
	char *buffer;

	/* if the file_path is NULL, return 0*/
	if (file_path == NULL)
		return (0);
	/* Allocates memory for buffer */
	buffer = malloc(sizeof(char) * num_chars);

	/* if buffer is NULL, therefore returns 0 */
	if (buffer == NULL)
		return (0);

	/* opens files for reading */
	fd = open(file_path, 0_RDONLY);
	/* read files into bufers*/
	bytes_read = read(fd, buffer, num_chars);
	/* write buffers into stdout */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	/* Check for occurance of any error */
if (fd == -1 || bytes_read == -1 || bytes_written == -1 || bytes_written != bytes_read)
{
	/* free buffer if there is an error */
	free(buffer);
	return (0);
}

/* free buffer after use */
free(buffer);
/* close file */
close(fd);

/* Returns the number of bytes written to stdout*/
return (bytes_written);
