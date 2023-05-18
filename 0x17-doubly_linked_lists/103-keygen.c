#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * generate_key - Generates a valid key based on the given username.
 * @username: The username for which the key needs to be generated.
 * @key: The generated will be stored in this buffer.
 *
 * Description: This function generates a valud key by performing
 * an operation between each character of the username and a
 * corresponding value derived from the length and index of
 * the character. The generated key is stored in the key buffer.
 */

void generate_key(char *username, char *key)
{
	int len = strlen(username);
	int i;

	for (i = 0; i < len; i++)
	{
		key[i] = username[i] ^ (i + len);
	}

	key[len] = '\0';
}

/**
 * main - The entry point of the keygen program.
 * @argc: The number of command-line arguments.
 * @argv: An array o strins containing the command-line arguments.
 *
 * Description: This function serves as the entry point of the keygen program.
 * It takes the username as a command-line argument, generates a valid key
 * for the usernmae using the genearte_key function, and prints the key
 * to stdout.
 * Return: The function returns 0 upon successful execution.
 */

int main(int argc, char *argv[])
{
	char *username = argv[1];
	int key_length = strlen(username) + 1;
	char *key = malloc(key_length * sizeof(char));

	if (argc != 2)
	{
		printf("Usage: %s <username>\n", "keygen5");
		return (1);
	}

	if (key == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}

	generate_key(username, key);
	printf("%s\n", key);

	free(key);

	return (0);
}

