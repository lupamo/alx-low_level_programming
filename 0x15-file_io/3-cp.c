#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

/**
 * file_append - copies a file to another
 * @fd_from: file descriptor from main file
 * @fd_to: file desccriptor to another file
 * Return: nothing
 */
void file_append(const char *fd_from, const char *fd_to)
{
	int char1, char2, wrote;
	char buff[1024];

	char1 = open(fd_from, O_RDONLY);
	if (fd_from || char1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd_from);
		exit(98);
	}
	char2 = open(fd_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((wrote =  read(char1, buff, 1024)) > 0)
	{
		if (write(char2, buff, wrote) != wrote || char2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fd_to);
			exit(99);
		}
	}
	if (wrote == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fd_from);
		exit(98);
	}
	if (close(char1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", char1);
		exit(100);
	}
	if (close(char2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", char2);
		exit(100);
	}
}
/**
 * main - checks arguments in command and appends
 * @argc: arguments in command
 * @argv: count of arguments
 * Return: 98 if successful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	file_append(argv[1], argv[2]);
	exit(0);
}
