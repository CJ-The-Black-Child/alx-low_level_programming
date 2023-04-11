#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char *create_buffer();
void close_file(int fd);

/**
 * create_buffer - Allocates memory for a buffer.
 *
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer()
{
	char *buffer = malloc(sizeof(char) * BUFFER_SIZE);

	if (buffer == NULL)
	{
		perror("Error: cant allocate memory");
		exit(EXIT_FAILURE);
	}
	return (buffer);
}

/**
 * close_file - Closes a file descriptor
 *
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)
{
	int result = close(fd);

	if (result == -1)
	{
		perror("Error: Can't close file");
		exit(EXIT_FAILURE);
	}
}

/**
 * main - Copies the contents of a file to another file.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: it returns 0 on success
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	/* Checks if the number of arguments is correct */
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(EXIT_FAILURE);
	}
	/* Create a buffer for reading the file */
	buffer = create_buffer();

	/* Open the source file for reading */
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		perror("Error: Can't read from file");
		exit(EXIT_FAILURE);
	}
	/* Open destination file for writing */
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		perror("Error: Can't write to file");
		exit(EXIT_FAILURE);
	}

	/* Copy the contents of the source file to the destination file */
	do {
		r = read(from, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			perror("Error:Can't read from file");
			free(buffer);
			exit(EXIT_FAILURE);
		}

		w = write(to, buffer, r);
		if (w == -1)
		{
			perror("Error: Can't write to file");
			free(buffer);
			exit(EXIT_FAILURE);
		}
	} while (r > 0);

	/* Closes the files and free the buffer */
	close_file(from);
	close_file(to);
	free(buffer);

	return (0);
}

