#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file to be read
 * @letters: number of letters in file
 * Return: the number of letters that was read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor;
	ssize_t byte_read;
	char *buff;

	buff = malloc(sizeof(char *) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	descriptor = open(filename, O_RDONLY, 0600);
	if (descriptor == -1)
	{
		return (0);
	}
	byte_read = read(descriptor, buff, letters);
	write(STDOUT_FILENO, buff, byte_read);
	free(buff);
	close(descriptor);

	return (byte_read);
}
